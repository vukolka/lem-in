#ifndef SDL_TUT_VERTEXTEXTURE_H
#define SDL_TUT_VERTEXTEXTURE_H


#include <SDL_render.h>

class VertexTexture
{
private:
	SDL_Texture *texture;
	int			tHeight;
	int 		tWidth;
public:

	VertexTexture(SDL_Texture *s_texture, int height, int width);

	void render(SDL_Renderer *renderer, int x, int y);
};


#endif //SDL_TUT_VERTEXTEXTURE_H
