#ifndef SDL_TUT_LEMINMAP_H
#define SDL_TUT_LEMINMAP_H
#include <string>
#include <forward_list>
#include "Room.h"
#include "AntObj.h"
#include <vector>

class LeminMap
{
private:
	std::vector<Room*> antsArray;
	Room	*start;
	Room	*end;
	int		ants;

public:
	int 	done_moving;
	std::forward_list<t_move> moveList;
	AntObj	*antObjs;
	t_move		move;
	int		maxX;
	int		maxY;
	int		minX;
	int 	minY;

	LeminMap();

	std::forward_list<Room*> rooms;

	void	setAnts(int antsAmmount);

	void	setStart(Room *startRoom);

	void	setEnd(Room *endRoom);

	void 	addRoom(Room *newRoom);

	Room	*roomFind(std::string Roomname);

	void	initAnts();

	bool	initMap();

	bool	isStartOrEnd(std::string basic_string);

	void	setStartOrEnd(std::string &line);

	Room	*transformToRoom(std::string &line);

	bool	isRoom(std::string &line);

	bool	isConnection(std::string &line);

	void	setConnection(std::string &line);

	bool makeTurn();

	bool makeMove();

	void scaleToScreeSize(int screenWidth, int screenHeight);
};


#endif //SDL_TUT_LEMINMAP_H
