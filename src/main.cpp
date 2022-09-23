#include <SDL2/SDL.h>

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;

int main(int argc, char* args[])
{

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

        g_pWindow = SDL_CreateWindow("Setting up SDL", //창 위에 이름
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            640, 480, //창 크기
            SDL_WINDOW_SHOWN);

        if (g_pWindow != 0) {
            g_pRenderer
                = SDL_CreateRenderer(g_pWindow, -1, 0); 
        }
    }
    else {
        return 1;
    }

    SDL_SetRenderDrawColor(
        g_pRenderer, 0, 0, 255, 255); //색상 rgb
    SDL_RenderClear(g_pRenderer);
 //   SDL_RenderPresent(g_pRenderer);

    SDL_Delay(5000); //5초 뒤에 종료
    SDL_Quit(); //종료

    return 0;
}
