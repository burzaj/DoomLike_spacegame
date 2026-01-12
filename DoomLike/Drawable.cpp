#include "Drawable.h"

void Draw_to_window(SDL_Renderer& renderer)
{
	while (!Draw_order.empty())
	{
		Drawable* draw_task = Draw_order.top();
		Draw_order.pop();

		draw_task->draw();

		delete draw_task;
	}
};