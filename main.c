#include <stdio.h>
#include "SUGPL/sugpl.h"

#undef main

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 700

typedef struct {
    int len;
    Transform *arr;
} dynamicTransformArray;

int main(){
    SUG_InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT);

    dynamicTransformArray transforms = {3, malloc(3 * sizeof(Transform))};
    Transform t = {0};
    t.position.x = 3;
    transforms.arr[2] = t;
    transforms.arr = realloc(transforms.arr, 6 * sizeof(Transform));

    printf("%f\n", transforms.arr[2].position.x);

    FILE *save;
    save = fopen("data/save.txt", "r");
    char line[128];
    char boolStr[6]; // "true" or "false"
    float test = 0;
    float test2 = 0;
    while (fgets(line, sizeof(line), save)) {
        sscanf(line, "%f %f", &test, &test2);
    }
    printf("%f", test2);
    fclose(save);
    
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

    free(transforms.arr);

    SUG_Quit();
    return 0;
}