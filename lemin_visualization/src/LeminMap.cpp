//
// Created by vukolov on 07.02.18.
//

#include <iostream>
#include <cstring>
#include "LeminMap.h"

void LeminMap::setStart(Room *startRoom)
{
	start = startRoom;
}

void LeminMap::setEnd(Room *endRoom)
{
	end = endRoom;
}

void LeminMap::addRoom(Room *newRoom)
{
	rooms.push_front(newRoom);
}

Room *LeminMap::roomFind(std::string Roomname)
{
	for (Room *i : rooms)
	{
		if (i->isRoomName(Roomname))
			return (i);
	}
	return nullptr;
}

bool LeminMap::initMap()
{
	std::string line;

	getline(std::cin, line);

	ants = atoi(line.c_str());

	while (getline(std::cin, line))
	{
		if (isStartOrEnd(line))
			setStartOrEnd(line);
		else if (isRoom(line))
			addRoom(transformToRoom(line));
		else if (isConnection(line))
			setConnection(line);
		else
			break;
	}
	initAnts();
	antObjs = new AntObj(ants, start);
	return (true);
}

bool LeminMap::isStartOrEnd(std::string basic_string)
{
	return (std::strcmp(basic_string.c_str(), "##start")) == 0
		   || (std::strcmp(basic_string.c_str(), "##end")) == 0;
}

void LeminMap::setStartOrEnd(std::string &line)
{
	Room *head;

	bool flag = true;
	if (strcmp(line.c_str(), "##start") == 0)
		flag = false;
	getline(std::cin, line);
	head = transformToRoom(line);
	addRoom(head);
	if (flag)
		setEnd(head);
	else
		setStart(head);

}

Room *LeminMap::transformToRoom(std::string &line)
{
	int i = 0;
	std::string name = line.substr(0, line.find(" "));
	const char *ParseRoom = line.c_str();
	while (ParseRoom[i] != ' ')
		i++;
	i++;
	int x_cor = atoi(ParseRoom + i);
	if (x_cor > maxX)
		maxX = x_cor;
	if (x_cor < minX)
		minX = x_cor;
	while (ParseRoom[i] != ' ')
		i++;
	i++;
	int y_cor = atoi(ParseRoom + i);
	if (y_cor > maxY)
		maxY = y_cor;
	if (y_cor < minY)
		minY = y_cor;
	Room *newRoom = new Room(name, x_cor, y_cor);
	return (newRoom);
}

bool LeminMap::isRoom(std::string &line)
{
	return line.find(" ") != std::string::npos;
}

bool LeminMap::isConnection(std::string &line)
{
	return (line.find("-") != std::string::npos);
}

void LeminMap::setConnection(std::string &line)
{
	Room *r1;
	Room *r2;

	r1 = roomFind(line.substr(0, line.find("-")));
	r2 = roomFind(line.substr(line.find("-") + 1));
	r1->addConnection(r2);
	r2->addConnection(r1);
}

void LeminMap::setAnts(int antsAmmount)
{
	ants = antsAmmount;
}

LeminMap::LeminMap()
{
	done_moving = 0;
	minX = INT32_MAX;
	minY = INT32_MAX;
	maxY = 0;
	maxX = 0;
}

bool LeminMap::makeTurn()
{
	std::string	line;
	int			x;
	Room		*fromRoom;
	Room		*toRoom;
	size_t 		pos;

	getline(std::cin, line);
	if ((pos = line.find_first_of("L")) == std::string::npos) {
		done_moving = 1;
		return (false);
	}
	while ((pos = line.find_first_of("L")) != std::string::npos)
	{
		x = atoi(line.c_str() + 1);
		fromRoom = antsArray.at(x - 1);
		line.erase(0, line.find_first_of("-") + 1);
		toRoom = roomFind(line.substr(0, line.find_first_of(" ")));
		moveList.push_front({fromRoom, toRoom});
		antsArray.at(x - 1) = toRoom;
		line.erase(0, line.find(" L") + 1);
	}
	return (true);
}

bool LeminMap::makeMove()
{
	if (moveList.empty())
		return (false);
	move = moveList.front();
	moveList.pop_front();
	return (true);
}

void LeminMap::initAnts()
{
	int i = 0;
	while (i < ants)
	{
		antsArray.push_back(start);
		i++;
	}
}

void LeminMap::scaleToScreeSize(int screenWidth, int screenHeight)
{
	int offSet = 40;
	int multiplierX = (screenWidth - offSet*2) / (maxX + minX);
	int multiplierY = (screenHeight - offSet*2) / (maxY + minY);

	for (Room *i : rooms)
	{
		i->x = i->x * multiplierX + offSet / 2;
		i->y = i->y * multiplierY + offSet / 2;
	}
}
