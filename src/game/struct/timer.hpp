#pragma once
#include <functional>

struct Timer
{
    bool mIsActive;
    unsigned int mMilliseconds;
    unsigned int mFinishTime;
    bool mIsLooping;
    std::function<bool(void)> mTimerCallback;
};