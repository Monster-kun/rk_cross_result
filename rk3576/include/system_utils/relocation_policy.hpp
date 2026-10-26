#ifndef SYSTEM_UTILS__RELOCATION_POLICY_HPP_
#define SYSTEM_UTILS__RELOCATION_POLICY_HPP_

#include <chrono>
#include <cmath>
#include <cstdint>
#include <stdexcept>
#include <string>

namespace system_utils
{

struct RelocationConfig
{
  std::string mode{"auto"};
  int max_auto_attempts{5};
  double retry_interval_sec{1.0};
  double request_timeout_sec{30.0};
  double initialization_timeout_sec{30.0};
};

// ROS callbacks own this state machine. A service result only supplies a guess;
// success must be reported separately by the localization backend.
class RelocationPolicy
{
public:
  using Clock = std::chrono::steady_clock;
  using TimePoint = Clock::time_point;
  enum class State {WaitingAuto, Requesting, ValidatingAuto, WaitingManual,
    ValidatingManual, Tracking};

  explicit RelocationPolicy(const RelocationConfig & config = RelocationConfig())
  {
    configure(config);
  }

  void configure(const RelocationConfig & config)
  {
    if (config.mode != "auto" && config.mode != "manual") {
      throw std::invalid_argument("relocation_mode must be auto or manual");
    }
    if (config.max_auto_attempts < 1 ||
      !std::isfinite(config.retry_interval_sec) || config.retry_interval_sec < 0.0 ||
      !std::isfinite(config.request_timeout_sec) || config.request_timeout_sec <= 0.0 ||
      !std::isfinite(config.initialization_timeout_sec) ||
      config.initialization_timeout_sec <= 0.0)
    {
      throw std::invalid_argument("Invalid relocation attempt limit or timeout");
    }
    config_ = config;
    startEpisode(Clock::now());
  }

  void startEpisode(TimePoint now)
  {
    ++generation_;
    attempts_ = 0;
    state_ = config_.mode == "manual" ? State::WaitingManual : State::WaitingAuto;
    next_attempt_ = now;
  }

  bool readyToRequest(TimePoint now) const
  {
    return state_ == State::WaitingAuto && attempts_ < config_.max_auto_attempts &&
           now >= next_attempt_;
  }

  std::uint64_t beginRequest(TimePoint now)
  {
    if (!readyToRequest(now)) {
      throw std::logic_error("Automatic relocation is not ready for a request");
    }
    ++attempts_;
    state_ = State::Requesting;
    deadline_ = now + duration(config_.request_timeout_sec);
    return ++generation_;
  }

  bool matchesRequest(std::uint64_t generation) const
  {
    return state_ == State::Requesting && generation_ == generation;
  }

  bool acceptAutomatic(std::uint64_t generation, TimePoint now)
  {
    if (!matchesRequest(generation)) {return false;}
    if (timedOut(now)) {
      fail(now);
      return false;
    }
    state_ = State::ValidatingAuto;
    deadline_ = now + duration(config_.initialization_timeout_sec);
    return true;
  }

  void acceptManual(TimePoint now)
  {
    ++generation_;
    state_ = State::ValidatingManual;
    deadline_ = now + duration(config_.initialization_timeout_sec);
  }

  bool validating() const
  {
    return state_ == State::ValidatingAuto || state_ == State::ValidatingManual;
  }

  bool timedOut(TimePoint now) const
  {
    return (state_ == State::Requesting || validating()) && now >= deadline_;
  }

  void fail(TimePoint now)
  {
    if (state_ != State::Requesting && !validating()) {return;}
    const bool manual = state_ == State::ValidatingManual;
    ++generation_;
    state_ = manual || attempts_ >= config_.max_auto_attempts ?
      State::WaitingManual : State::WaitingAuto;
    next_attempt_ = now + duration(config_.retry_interval_sec);
  }

  // async_send_request can throw before submitting anything. Such a send does
  // not consume an attempt, but still observes the retry interval.
  void requestNotSent(std::uint64_t generation, TimePoint now)
  {
    if (!matchesRequest(generation)) {return;}
    --attempts_;
    fail(now);
  }

  bool succeed(TimePoint now)
  {
    if (!validating()) {return false;}
    if (timedOut(now)) {
      fail(now);
      return false;
    }
    ++generation_;
    state_ = State::Tracking;
    return true;
  }

  State state() const {return state_;}
  int attempts() const {return attempts_;}
  const RelocationConfig & config() const {return config_;}

  const char * stateName() const
  {
    switch (state_) {
      case State::WaitingAuto: return "WAIT_AUTO";
      case State::Requesting: return "AUTO_REQUESTING";
      case State::ValidatingAuto: return "AUTO_VALIDATING";
      case State::WaitingManual: return "WAIT_MANUAL";
      case State::ValidatingManual: return "MANUAL_VALIDATING";
      case State::Tracking: return "TRACKING";
    }
    return "UNKNOWN";
  }

private:
  static Clock::duration duration(double seconds)
  {
    return std::chrono::duration_cast<Clock::duration>(std::chrono::duration<double>(seconds));
  }

  RelocationConfig config_;
  State state_{State::WaitingAuto};
  int attempts_{0};
  std::uint64_t generation_{0};
  TimePoint next_attempt_{};
  TimePoint deadline_{};
};

}  // namespace system_utils

#endif  // SYSTEM_UTILS__RELOCATION_POLICY_HPP_
