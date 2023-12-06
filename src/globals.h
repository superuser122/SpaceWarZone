#ifndef GLOBALS_H
#define GLOBALS_H
#include <stdlib.h>
#include "settings.h"

typedef enum {
    SPLASH,
    MAIN_MENU,
    LEVEL_ONE,
    PAUSE,
} GameState;
 
int get_random_between(int from, int till);

#endif