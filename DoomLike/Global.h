#pragma once

#include <stack>
#include "Drawable.h"

using namespace std;

enum window_state
{
	WINDOW_EXIT,
	WINDOW_CONTINUE
};

extern int Window_state;

extern stack<Drawable*> Draw_order;