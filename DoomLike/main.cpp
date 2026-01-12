#include <SDL3/SDL.h>
#include "Global.h"
#include "Window_state_handle.h"
#include "Draw_to_window.h"
#undef main

int main()
{
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;

	SDL_Init(SDL_INIT_VIDEO);
	SDL_CreateWindowAndRenderer("DOOMLIKE", 640, 480, 
		SDL_WINDOW_FULLSCREEN
		, &window, &renderer);

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	while (Window_state != WINDOW_EXIT)
	{
		Window_state_handle();

		Draw_to_window();
	}

	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderPoint(renderer, 10, 10);

	SDL_RenderPresent(renderer);
	

	SDL_Quit();

	return 0;
}