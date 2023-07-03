#ifndef GLOBALS_H
#define GLOBALS_H
#include <stdlib.h>

typedef enum {
    SPLASH,
    MAIN_MENU,
    LEVEL_ONE,
    PAUSE,
} GameState;
 
GameState game_state_glob;

#endif