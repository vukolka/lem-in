#include <iostream>
#include "lemin_vis.h"

void lemin_vis::OnRender()
{
	SDL_RenderClear(renderer);


	int offSet = 40;

	VertexTexture antVertex(media.antTexture, offSet, offSet);
	VertexTexture circleVertex(media.circleTexture, offSet, offSet);

	lemin_map.antObjs->renderAnt(renderer, antVertex);
	for(Room *i : lemin_map.rooms)
	{
		circleVertex.render(renderer,
						i->x,
						i->y);
		for (Room *conn : i->rooms)
		{
			SDL_SetRenderDrawColor( renderer, 0x0, 0x0, 0x0, 0x0 );
			SDL_RenderDrawLine(renderer,
							   i->x + offSet / 2,
							   i->y + offSet / 2,
							   conn->x + offSet / 2,
							   conn->y + offSet / 2);
		}
		SDL_SetRenderDrawColor( renderer, 0x00, 0x00, 0xFF, 0xFF );
	}

	SDL_RenderPresent(renderer);
}
