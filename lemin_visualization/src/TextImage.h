#pragma once

#include <string>
#include <SDL_surface.h>
#include <SDL_render.h>
#include <SDL_ttf.h>

class TextImage
{

public:
	SDL_Surface *textSurf;

	bool	loadSurface(std::string name,
						TTF_Font *font,
						SDL_Color textColor);
};


