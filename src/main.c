#include "raylib.h"
#include "game.h"
#include "splash_screen.h"
#include "main_menu.h"
#include "settings.h"
#include <stdio.h>

int main(void){

    GameSettings *settings = (GameSettings*)malloc(sizeof(GameSettings));
    if (settings == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    settings->screen_width = 800;
    settings->screen_height = 600;

    GameApp game = {
        .settings = settings,
        .main_menu = NULL,
        .splash_screen = NULL
    };

    // GameApp *game = (GameApp*)malloc(sizeof(GameApp));
    // game->settings = settings;
    // game->main_menu = NULL;
    // game->splash_screen = NULL;


    //Main loop starts here;
    run_game(&game);

    return 0;
}