#ifndef MAIN_MENU_H
#define MAIN_MENU_H
#include "raylib.h"
#include "globals.h"

typedef struct MainMenu{
   GameState *state;
   bool initiliazed;
   Texture2D background;
} MainMenu;

void run_main_menu(MainMenu *menu, GameState *state);

void main_menu_setup(MainMenu *menu, GameState *state);

void main_menu_update(MainMenu *menu);

void main_menu_render(MainMenu *menu);


#endif