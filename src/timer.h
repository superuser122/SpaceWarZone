#ifndef TIMER_H
#define TIMER_H

#include "raylib.h"
#include "raymath.h"


// define a timer
typedef struct
{
    float life_time;
}Timer;

// start or restart a timer with a specific lifetime
void timer_start(Timer* timer, float life_time);

// update a timer with the current frame time
void timer_update(Timer* timer);

// check if a timer is done.
bool timer_done(Timer* timer);

#endif