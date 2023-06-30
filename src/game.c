#include "game.h"

void run_game(GameApp *game){

    InitWindow(game->settings->screen_width, game->settings->screen_height, "Amazing Game");

    SetTargetFPS(60);              
    while (!WindowShouldClose()){
        ClearBackground(RAYWHITE);
        BeginDrawing();
        switch (game->game_state){
            case SPLASH:
                splash_screen_run(&game->splash_screen, &game->game_state);
                break;
            case MAIN_MENU:
                run_main_menu(&game->main_menu, &game->game_state);
                break;
            case LEVEL_ONE:
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