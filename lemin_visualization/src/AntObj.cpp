#include <sys/param.h>
#include <assert.h>
#include <tgmath.h>
#include <iostream>
#include "AntObj.h"

void AntObj::stepForward()
{
	assert(inMidWay);
	for (int i = 0; i < antsTotal; ++i)
	{
		if (antsArray[i]->toRoom)
		{
			if (!antsArrived(antsArray[i]))
				moveTowards(antsArray[i]);
			else
			{
				setArrived();
				break;
			}
		}
	}
}

void AntObj::initMove(t_move move)
{
	inMidWay = true;
	double newX = (move.from->x - move.to->x);
	double newY = (move.from->y - move.to->y);
	double mediana = sqrt(newX * newX + newY * newY);
	for (int i = 0; i < antsTotal; ++i)
	{
		if (antsArray[i]->fromRoom->name == move.from->name
			&& !antsArray[i]->toRoom)
		{
			antsArray[i]->fromRoom = move.from;
			antsArray[i]->toRoom = move.to;
			antsArray[i]->stepSize = mediana;
			antsArray[i]->x = move.from->x;
			antsArray[i]->y = move.from->y;
			break ;
		}
	}
}

AntObj::AntObj(int ants, Room *start)
{
	antsTotal = ants;
	inMidWay = false;
	for (int i = 0; i < ants; ++i)
	{
		auto *newAnt = (t_ant *)calloc(1, sizeof(t_ant));
		newAnt->fromRoom = start;
		newAnt->x = start->x;
		newAnt->y = start->y;
		newAnt->toRoom = NULL;
		newAnt->frameIt = 0;
		antsArray.push_back(newAnt);
	}
}

AntObj::~AntObj()
{
	for (int i = 0; i < antsTotal; ++i)
		free(antsArray[i]);
}

void AntObj::setArrived()
{
	for (int i = 0; i < antsTotal; ++i)
	{
		if (antsArray[i]->toRoom)
			antsArray[i]->fromRoom = antsArray[i]->toRoom;
		antsArray[i]->toRoom = nullptr;
		antsArray[i]->frameIt = 0;
	}
	inMidWay = false;
}

bool AntObj::antsArrived(t_ant *&current)
{
	return (current->frameIt == 29);
}

void AntObj::renderAnt(SDL_Renderer *renderer, VertexTexture &circleVertex)
{
	for (int i = 0; i < antsTotal; ++i)
		circleVertex.render(renderer, antsArray[i]->x, antsArray[i]->y);
}

void AntObj::moveTowards(t_ant *current)
{
	double currentLength = current->stepSize / 30 * (current->frameIt + 1);
	double delta = currentLength / current->stepSize;
	int newX = current->fromRoom->x + (current->toRoom->x - current->fromRoom->x)*delta;
	int newY = current->fromRoom->y + (current->toRoom->y - current->fromRoom->y)*delta;
	current->x = newX;
	current->y = newY;
	current->frameIt++;
}
