#pragma once

#include <SDL.h>
#include "LeminMedia.h"
#include "LeminMap.h"

class lemin_vis
{
private:
	int imgFlags;

	bool running;

	int screenHeight;

	int screenWidth;

	LeminMap lemin_map;

	SDL_Surface *screenSurface;

	SDL_Window *window;

	SDL_Renderer *renderer;

	LeminMedia media;

public:
	lemin_vis();

	lemin_vis(int height, int width);

	bool LoadMap();

	int	OnExecute();

	bool OnInit();

	bool LoadMedia();

	void OnEvent(SDL_Event *event);

	void OnLoop();

	void OnRender();

	void OnCleanup();

};
