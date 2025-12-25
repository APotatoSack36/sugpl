#include <stdio.h>
#include "SUGPL/sugpl.h"

#undef main

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 700



int main(){
    SUG_InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT);

    _Bool gameState = 1;
    while(gameState){
        SDL_Event event;
         while(SDL_PollEvent(&event)){
            if(event.type == SDL_QUIT){
                gameState = !gameState;
            }
         }
        SDL_SetRenderDrawColor(renderer, 255, 0, 255, 255);
        SDL_RenderDrawPoint(renderer, 100, 100);

        SUG_Render();
    }

    SUG_Quit();
    return 0;
}