#include "game.h"

void run_game(GameApp *game){

    InitWindow(game->settings->screen_width, game->settings->screen_height, "Amazing Game");
    Player *player = (Player*)malloc(sizeof(Player)); 
    player->texture = LoadTexture("assets/player.png");
    Rectangle col = { .x = 0, .y=0, .width = 120, .height = 90 };
    Vector2 position = { .x = 100, .y = game->settings->screen_height/2};
    player->position = position;
    player->speed = 500.0f;
    player->body_collider = col;

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
                level_one_run(&game->level_one, player);
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