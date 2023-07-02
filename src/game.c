#include "game.h"

void run_game(GameApp *game){

    InitWindow(game->settings->screen_width, game->settings->screen_height, "Amazing Game");

    SetTargetFPS(60);              
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        switch (game->game_state){
            case SPLASH:
                splash_screen_run(&game->splash_screen, &game->game_state);
                break;
            case MAIN_MENU:
                main_menu_run(&game->main_menu, &game->game_state);
                break;
            case LEVEL_ONE:
                level_one_run(&game->game_state);
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