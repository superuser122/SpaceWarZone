#ifndef GAME_H
#define GAME_H
#include "raylib.h"
#include "globals.h"
#include "main_menu.h"
#include "settings.h"
#include "splash_screen.h"
#include "level_one.h"

typedef struct {
    GameState game_state;
    GameSettings *settings;
    SplashScreen *splash_screen;
    MainMenu *main_menu;
    LevelOne *level_one;
} GameApp;

void run_game(GameApp *game);


#endif