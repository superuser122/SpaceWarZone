#include "main_menu.h"

void run_main_menu(MainMenu **menu, GameState *state){
    if(*menu == NULL){
        *menu = (MainMenu*)malloc(sizeof(MainMenu));
        (*menu)->state = state;
        (*menu)->background = LoadTexture("assets/menu.png"); 
        return;
    }
    main_menu_update((*menu));
    main_menu_render((*menu));
    
}


void main_menu_update(MainMenu *menu){
    
}

void main_menu_render(MainMenu *menu){
    Rectangle r = { .x = 0, .y = 0, .width = 50, .height = 50};
    Vector2 p = { .x = 200, .y = 300};

    DrawTexture(menu->background,0,0,WHITE);
    //DrawTextureRec(menu->background, r, p, WHITE);

}