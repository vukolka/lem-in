//
// Created by vukolov on 07.02.18.
//

#include <iostream>
#include "Room.h"

Room::Room(std::string r_name, int r_x, int r_y)
{
	ants_ammount = 0;
	busy = false;
	name = r_name;
	x = r_x;
	y = r_y;
}

void Room::addConnection(Room *toConnect)
{
	rooms.push_front(toConnect);
}

bool Room::isBusy()
{
	return ants_ammount > 0;
}

void Room::setBusy()
{
	busy = true;
}

void Room::setFree()
{
	busy = false;
}

bool Room::isRoomName(std::string findName)
{
	return (findName == name);
}

void Room::incrementAnts()
{
	ants_ammount++;
}

void Room::decrementAnts(void)
{
	if (ants_ammount > 0)
		ants_ammount--;
	else
		std::cout << "Can\'t set less than 0 at "<< name <<std::endl;
}
