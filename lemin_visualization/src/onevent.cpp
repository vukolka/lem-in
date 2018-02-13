#include <SDL_events.h>
#include "lemin_vis.h"

void lemin_vis::OnEvent(SDL_Event *event)
{
	if (event->type == SDL_QUIT)
		running = false;
	if (event->type == SDL_KEYDOWN)
		if (event->key.keysym.sym == SDLK_ESCAPE)
			running = false;
}
