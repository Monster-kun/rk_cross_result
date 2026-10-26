#ifndef LI2SUP_REGISTRATION_GENERATION_H_
#define LI2SUP_REGISTRATION_GENERATION_H_

#include <cstdint>

namespace LI2Sup {

// A worker result is committable only for the exact sensor/initial-pose epoch
// that created its immutable input snapshot.
constexpr bool RegistrationGenerationMatches(
    const std::uint64_t task_generation,
    const std::uint64_t current_generation) {
  return task_generation == current_generation;
}

}  // namespace LI2Sup

#endif
