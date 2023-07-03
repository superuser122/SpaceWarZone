#ifndef LEVEL_ONE_H
#define LEVEL_ONE_H
#include "raylib.h"
#include "player.h"
#include "globals.h"

typedef struct {
    Player *player;
} LevelOne;

void level_one_run();

#endif