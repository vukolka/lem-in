
#include <SDL_image.h>
#include <iostream>
#include "lemin_vis.h"

bool lemin_vis::OnInit()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		printf("SDL couldn\'t be initialized. SDL_Error: %s\n", SDL_GetError());
		return (false);
	}

	if ( !(IMG_Init(imgFlags) & imgFlags))
	{
		std::cout << "SDL_image could not initialize! SDL_image Error:"
				  << "SDL_GetError: " << SDL_GetError() << std::endl;
		return (false);
	}

	if (TTF_Init() == -1)
	{
		std::cout << "Couldn\'t load TTF, SDL_GetError: " << SDL_GetError()
				<< std::endl;
	}

	window = SDL_CreateWindow("Lem-In visualisation",
									 SDL_WINDOWPOS_UNDEFINED,
									 SDL_WINDOWPOS_UNDEFINED,
									 screenWidth,
									 screenHeight,
									 SDL_WINDOW_SHOWN);
	if (!window)
	{
		printf("Window couldn\'t be created. SDL_Error: %s", SDL_GetError());
		return (false);
	}
	else
	{
		screenSurface = SDL_GetWindowSurface(window);
		SDL_FillRect(screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ));
		SDL_UpdateWindowSurface(window);
	}
	renderer = SDL_GetRenderer(window);
	if (!renderer)
	{
		printf("REnderer couldn\'t be initialized. SDL_Error: %s\n", SDL_GetError());
		return (false);
	}
	else
		SDL_SetRenderDrawColor(renderer, 0, 0x5f, 0x1f, 0xFF);

	return (true);
}


