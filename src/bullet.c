#include "bullet.h"

void bullet_update(Bullet *self){
    float deltaTime = GetFrameTime();
    self-> position.x += self->velocity.x * self->speed * deltaTime;
}

void bullet_render(Bullet *self){
    float bloom = 20.0f;
    switch (self->type)
    {
    case NORMAL:
        {
            DrawCircleGradient((int)self->position.x, (int)self->position.y, bloom, Fade(SKYBLUE, 0.6f), Fade(SKYBLUE, 0.0f));
            DrawCircle((int)self->position.x, (int)self->position.y, 4.0, SKYBLUE ); 
        }
        break;
    default:
        break;
    }

}