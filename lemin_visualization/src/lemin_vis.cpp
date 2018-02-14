//
// Created by vukolov on 06.02.18.
//

#include <zconf.h>
#include "lemin_vis.h"
#include <SDL_image.h>


lemin_vis::lemin_vis()
{
	imgFlags = IMG_INIT_PNG;
	screenWidth = 2500;
	screenHeight = 1200;
	running = true;
}

int lemin_vis::OnExecute()
{
	if (!OnInit())
		return (-1);

	if (!LoadMap())
		return (-1);

	lemin_map.scaleToScreeSize(screenWidth, screenHeight);

	if (!LoadMedia())
		return (-1);

	SDL_Event event;
	while (running)
	{
		while (SDL_PollEvent(&event))
			OnEvent(&event);

		OnLoop();
		OnRender();
		OnRender();
		SDL_Delay(20);
	}
	OnCleanup();
	return 0;
}

lemin_vis::lemin_vis(int height, int width)
{
	imgFlags = IMG_INIT_PNG;
	screenHeight = height;
	screenWidth = width;
	screenSurface = NULL;
	window = NULL;
	renderer = NULL;
	running = true;
}
