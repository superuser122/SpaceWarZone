#ifndef STARS_H
#define STARS_H
#include "raylib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "settings.h"
#include "globals.h"

typedef struct {
    Vector2 position;
    float speed;
    int size;
} Star;

void stars_update(Star *self, GameSettings *settings);

void stars_render(Star *self);

#endif