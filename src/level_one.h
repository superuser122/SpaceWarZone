#ifndef LEVEL_ONE_H
#define LEVEL_ONE_H
#include "raylib.h"
#include "player.h"
#include "globals.h"

typedef struct {
    Player *player;
    Texture2D background;
} LevelOne;

void level_one_run(LevelOne **level_one);

void level_one_render(LevelOne *level_one);

#endif