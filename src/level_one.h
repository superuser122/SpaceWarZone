#ifndef LEVEL_ONE_H
#define LEVEL_ONE_H
#include "raylib.h"
#include "player.h"
#include "globals.h"

typedef struct {
    GameState *state;
    Player *player;
} LevelOne;

void level_one_run(GameState *state);

#endif