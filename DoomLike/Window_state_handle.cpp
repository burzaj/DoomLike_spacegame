#include "Window_state_handle.h"
#include "Global.h"

void Window_state_handle()
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_EVENT_QUIT:
		{
			Window_state = WINDOW_EXIT;
		}
		break;
		}
	}
}
