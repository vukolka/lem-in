#pragma once
#include <SDL_render.h>
#include "VertexTexture.h"
#include "Room.h"
#include <vector>

typedef struct	s_move
{
	Room		*from;
	Room		*to;
}				t_move;


typedef struct	s_ant
{
	int x;
	int y;
	double stepSize;
	Room	*fromRoom;
	Room	*toRoom;
	int 	frameIt;
}				t_ant;

class AntObj
{
public:
	bool inMidWay;

	AntObj(int ants, Room *start);

	void stepForward();

	void initMove(struct s_move move);

	~AntObj();

	void renderAnt(SDL_Renderer *renderer, VertexTexture &circleVertex);

	int antsTotal;

private:

	std::vector<t_ant*> antsArray;

	void setArrived();

	bool antsArrived(t_ant *&current);


	void moveTowards(t_ant *current);
};
