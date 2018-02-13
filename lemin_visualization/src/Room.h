#pragma once
#include <string>
#include <forward_list>

class Room
{
private:

	bool busy;
	int	ants_ammount;

public:
	std::string name;
	std::forward_list<Room*> rooms;
	int x;
	int y;
	Room(std::string r_name, int r_x, int r_y);

	void 	addConnection(Room *toConnect);

	bool	isBusy();

	void 	setBusy();

	void 	setFree();

	void 	incrementAnts(void);

	void 	decrementAnts(void);

	bool 	isRoomName(std::string findName);
};


