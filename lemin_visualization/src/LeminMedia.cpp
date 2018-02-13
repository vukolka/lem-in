#include <iostream>
#include <SDL_image.h>
#include "LeminMedia.h"

SDL_Surface *LeminMedia::loadSurfaceImage(std::string path)
{
	SDL_Surface *loadedSurface;

	loadedSurface = IMG_Load(path.c_str());
	if (!loadedSurface)
	{
		std::cout << "Unable to load image" << path
				  <<"! SDL Error: " <<SDL_GetError()<< std::endl;
		return (nullptr);
	}
	return (loadedSurface);
}

SDL_Texture *LeminMedia::loadTexture(std::string path, SDL_Renderer *renderer)
{
	SDL_Texture *newTexture;
	SDL_Surface *srcImage = loadSurfaceImage(path);
	newTexture = SDL_CreateTextureFromSurface(renderer, srcImage);
	SDL_FreeSurface(srcImage);
	return (newTexture);
}

bool LeminMedia::loadFont(std::string fontName, int size)
{
	font = TTF_OpenFont(fontName.c_str(), size);
	if (!font)
	{
		std::cout << "Coldn\'t load font: " << fontName
				  << "! SDL_GetError: " << SDL_GetError() << std::endl;
		return (false);
	}
	return (true);
}

