#ifndef GAME_H
#define GAME_H
#include "raylib.h"
#include "globals.h"
#include "main_menu.h"
#include "settings.h"

typedef struct GameApp {
    GameState game_state;
    GameSettings settings;
    double splash_life_time;
    MainMenu main_menu;


} GameApp;

void run_game(GameApp *game);


#endif