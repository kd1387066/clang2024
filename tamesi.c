#include <SDL2/SDL.h>
#include <stdio.h>

// ウィンドウの幅と高さ
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

// プレイヤーキャラクターの幅と高さ
const int PLAYER_WIDTH = 50;
const int PLAYER_HEIGHT = 50;

// プレイヤーの速度
const int PLAYER_SPEED = 5;

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return -1;
    }

    SDL_Window* window = SDL_CreateWindow("2D Scroll Game",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        SDL_WINDOW_SHOWN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
        return -1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    SDL_Rect player = { WINDOW_WIDTH / 2 - PLAYER_WIDTH / 2, WINDOW_HEIGHT - PLAYER_HEIGHT - 10, PLAYER_WIDTH, PLAYER_HEIGHT };
    int cameraX = 0;
    int quit = 0;
    SDL_Event e;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = 1;
            }
        }

        const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
        if (currentKeyStates[SDL_SCANCODE_LEFT]) {
            player.x -= PLAYER_SPEED;
            if (player.x < cameraX) {
                cameraX = player.x;
            }
        }
        if (currentKeyStates[SDL_SCANCODE_RIGHT]) {
            player.x += PLAYER_SPEED;
            if (player.x + PLAYER_WIDTH > cameraX + WINDOW_WIDTH) {
                cameraX = player.x + PLAYER_WIDTH - WINDOW_WIDTH;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(renderer);

        // 描画領域の設定
        SDL_Rect renderQuad = { player.x - cameraX, player.y, player.w, player.h };
        SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
        SDL_RenderFillRect(renderer, &renderQuad);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}