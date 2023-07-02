#ifndef PLAYER_H
#define PLAYER_H
#include "raylib.h"

typedef struct {
    Texture2D texture;
    Rectangle body_collider;
    int health;
} Player;

#endif