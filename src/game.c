#include "game.h"

void run_game(GameApp *game){

    InitWindow(game->settings->screenWidth, game->settings->screenHeight, "Amazing Game");

    SetTargetFPS(60);              
    while (!WindowShouldClose()){
        ClearBackground(RAYWHITE);
        BeginDrawing();
        switch (game->game_state){
            case SPLASH:
                splash_screen(&game_state, &splash_life_time);
                break;
            case MAIN_MENU:
                run_main_menu(&main_menu, &game_state);
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