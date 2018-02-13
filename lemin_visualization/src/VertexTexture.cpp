#include <iostream>
#include "VertexTexture.h"

VertexTexture::VertexTexture(SDL_Texture *s_texture, int height, int width)
{
	texture = s_texture;
	tHeight = height;
	tWidth = width;
}

void VertexTexture::render(SDL_Renderer *renderer, int x, int y)
{
	SDL_Rect renderQuad = {x, y, tHeight, tWidth};

	SDL_RenderCopy(renderer, texture, nullptr, &renderQuad);
}
