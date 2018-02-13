#include <SDL_image.h>
#include "lemin_vis.h"

void lemin_vis::OnCleanup()
{
	SDL_DestroyWindow(window);
	TTF_Quit();
	IMG_Quit();
	SDL_Quit();
}
