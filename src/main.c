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
    settings->screen_width = 1280;
    settings->screen_height = 720;

    GameApp game = {
        .settings = settings,
        .main_menu = NULL,
        .splash_screen = NULL,
        .game_state = SPLASH,
    };

    // GameApp *game = (GameApp*)malloc(sizeof(GameApp));
    // game->settings = settings;
    // game->main_menu = NULL;
    // game->splash_screen = NULL;


    //Main loop starts here;
    run_game(&game);

    return 0;
}