#pragma once

#include <SDL_surface.h>

#include <string>
#include <SDL_ttf.h>
#include "VertexTexture.h"

class LeminMedia
{
private:
public:

	TTF_Font *font;

	SDL_Texture *antTexture;

	SDL_Texture *circleTexture;

	bool loadFont(std::string fontName, int size);

	SDL_Surface *loadSurfaceImage(std::string path);

	SDL_Texture * loadTexture(std::string path, SDL_Renderer *renderer);
};


