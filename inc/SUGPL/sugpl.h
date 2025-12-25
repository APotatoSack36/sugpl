#include <SDL2/SDL.h>

#include "components.h"

SDL_Window* window;
SDL_Renderer* renderer;

void SUG_InitWindow(uint16_t width, uint16_t height){
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Window!", 710, 290, width, height, SDL_WINDOW_SHOWN|SDL_WINDOW_RESIZABLE);
    renderer = SDL_CreateRenderer(window, -1, 0);
}

void SUG_ClearRender(Color backGroundColor){
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
}

_Bool SUG_DetectCollisions(){
    //Box on box

    //Box on line

    //Box on circle

    //line on circle

    //line on line

    //Circle on circle
}

void SUG_ResolveCollisions(){

}

void SUG_Render(){

    SDL_RenderPresent(renderer);

    Color background = {0, 0, 0, 255};
    SUG_ClearRender(background);
}

void SUG_Quit(){
    SDL_DestroyWindow(window);
    SDL_Quit();
}