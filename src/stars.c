#include "stars.h"

void stars_update(Star *self, GameSettings *settings){
    if(self->position.x < -self->size){
        self->position.y = (float)GetRandomValue(0, (int)settings->screen_height);
        self->position.x = settings->screen_width + 20;
        return;
    }
    self->position.x -=  self->speed * GetFrameTime();
}

void stars_render(Star *self){
    float bloom = self->size *3;
    DrawCircleGradient((int)self->position.x, (int)self->position.y, bloom, Fade(SKYBLUE, 0.6f), Fade(SKYBLUE, 0.0f));
    DrawCircle((int)self->position.x, (int)self->position.y, self->size, SKYBLUE );
}