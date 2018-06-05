#pragma once
#include "Locations.h"
class Room : public Locations
{
public:
	void sleep();
	Room(string name= "Pojok 214");
	~Room();
};

