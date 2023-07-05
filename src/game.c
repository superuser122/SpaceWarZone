#include "game.h"

void run_game(GameApp *game){

    InitWindow(game->settings->screen_width, game->settings->screen_height, "Amazing Game");

    SetTargetFPS(60);              
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        switch (game_state_glob){
            case SPLASH:
                splash_screen_run(&game->splash_screen);
                break;
            case MAIN_MENU:
                main_menu_run(&game->main_menu);
                break;
            case LEVEL_ONE:
                level_one_run(&game->level_one);
                break;
            case PAUSE:
                break;
            default:
                break;
        }
        
        EndDrawing();
    }

    CloseWindow();  

}