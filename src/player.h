#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"
#include "bullet.h"

typedef struct {
    Texture2D texture;
    Rectangle body_collider;
    Vector2 position;
    float speed;
    int health;
} Player;

void player_render(Player *self);

void player_update(Player *self);

void player_move(Player *self);

void player_shoot(Player *self, Bullet bullets[]);

#endif