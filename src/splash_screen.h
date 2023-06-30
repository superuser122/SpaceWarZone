#ifndef SPLASH_SCREEN_H
#define SPLASH_SCREEN_H

#include "raylib.h"
#include "globals.h"

typedef struct{
    GameState *state;
    Texture2D logo;
    float splash_lifetime;

} SplashScreen;



void splash_screen(SplashScreen **splash_screen, GameState *state);

#endif