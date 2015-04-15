#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL/SDL_image.h>

int main()
{
    system("pwd");
    if(SDL_Init(SDL_INIT_VIDEO) != 0)

    {
        fprintf(stderr, "SDL_Init Error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_OPENGL);

    if(win == NULL)
    {
        fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
        exit(1);
    }


    if(!IMG_Init(IMG_INIT_PNG))

       {
         fprintf(stderr, "IMG_Init: %s\n", IMG_GetError());
        exit(1);
       }

    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if(ren == NULL)
    {
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Surface *bmp = IMG_Load("../1.png");

    if(bmp == NULL)
    {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_LoadBMP Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);
    SDL_FreeSurface(bmp);

    if(tex == NULL) {
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        fprintf(stderr, "SDL_CreateTextureFromSurface Error: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    //Now lets draw our image
    //First clear the renderer
    SDL_SetRenderDrawColor(ren,0xFF,0xFF,0xCC,0xFF);
    SDL_Rect dstrect={0,0,256,256};
    SDL_RenderClear(ren);
    //Draw the texture
    SDL_RenderCopy(ren, tex, NULL, NULL);
    //Update the screen

    //Have the program wait for 2000ms so we get a chance to see the screen
    bool quit = false;

    SDL_Event e;
    int framewNumber = 0;

    while(!quit)
    {
        Uint32 ticks = SDL_GetTicks();
        Uint32 sprite = (ticks/10) %4;
        SDL_PollEvent(&e);
        switch (e.type)
        {
            case SDL_QUIT:
            quit=true;
            break;
        }

        SDL_RenderClear(ren);
        SDL_Rect srcrect={sprite*256,0,256,256};
        SDL_RenderCopy(ren, tex, &srcrect, &dstrect);
        SDL_RenderPresent(ren);
        //framewNumber = (framewNumber +1)%4
;    }

    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    IMG_Quit();
    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;
}
