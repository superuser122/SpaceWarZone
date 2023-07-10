#ifndef LEVEL_ONE_H
#define LEVEL_ONE_H
#include "raylib.h"
#include "player.h"
#include "globals.h"
#include "bullet.h"
#include "settings.h"
#include "stars.h"

#define LEVEL_ONE_MAX_BULLETS 100;

typedef struct {
    Player *player;
    Texture2D background;
    Bullet bullets[100];
    Star stars[100];
    GameSettings *settings;
} LevelOne;

void level_one_run(LevelOne **level_one, Player *player, GameSettings *settings);

void level_one_render(LevelOne *level_one);

void level_one_update(LevelOne *level_one);

#endif