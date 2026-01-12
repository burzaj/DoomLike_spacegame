#pragma once
class Drawable
{
	
public:
	virtual void draw() = 0;


};


void Draw_to_window(SDL_Renderer& renderer);
