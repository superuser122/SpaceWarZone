#include "timer.h"

void timer_start(Timer* timer, float lifetime){
    if (timer != NULL)
        timer->life_time = lifetime;
}

void timer_update(Timer* timer){
    // subtract this frame from the timer if it's not allready expired
    if (timer != NULL && timer->life_time > 0)
        timer->life_time -= GetFrameTime();
}

bool timer_done(Timer* timer){
    if (timer != NULL)
        return timer->life_time <= 0;

	return false;
}