#ifndef BULLET_H
#define BULLET_H
#include "raylib.h"


typedef enum {
    NORMAL,
} BulletType;

typedef struct {
    Vector2 position;
    Vector2 velocity;
    float speed;
    BulletType type;
    bool active;
    
} Bullet;




void bullet_update(Bullet *self);

void bullet_render(Bullet *self);

#endif