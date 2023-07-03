#ifndef MAIN_MENU_H
#define MAIN_MENU_H
#include "raylib.h"
#include "globals.h"

typedef struct MainMenu{
   Texture2D background;
} MainMenu;

void main_menu_run(MainMenu **menu);

void main_menu_update(MainMenu *menu);

void main_menu_render(MainMenu *menu);

#endif