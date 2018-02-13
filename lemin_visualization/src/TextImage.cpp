#include <iostream>
#include "TextImage.h"

bool TextImage::loadSurface(std::string name, TTF_Font *font, SDL_Color textColor)
{
	textSurf = TTF_RenderText_Solid(font, name.c_str(), textColor);
	if (!textSurf)
	{
		std::cout << "Couldn\'t render text: " << name << "SDL_GetError: "
				  << SDL_GetError() << std::endl;
		return (false);
	}
	return (true);
}
