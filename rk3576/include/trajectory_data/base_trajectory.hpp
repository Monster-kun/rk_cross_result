/* 
 * @author: Junfeng Guo
 * @date: 2024/03/27
*/
#pragma once
#ifndef BASE_TRAJECTORY_H_
#define BASE_TRAJECTORY_H_

namespace trajectory_data
{
class BaseTrajectory
{
public:
    BaseTrajectory() = default;
    virtual ~BaseTrajectory() = default;
    virtual void Clear() = 0;
    virtual bool Empty() const = 0;
    virtual int Size() const = 0;
};
} // namespace trajectory_data
#endif // BASE_TRAJECTORY_H_