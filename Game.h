#pragma once
#include "Gig.h"
#include "Ms.h"
#include "Room.h"
#include "Shop.h"
#include "YourCharacter.h"
#include <string>
using namespace std;

class Game
{
	YourCharacter you;
	Shop shop;
	Room room;
	Ms ms;
	Gig gig;

public:
	void introduce();
	void locationOptions();
	void displayInfo();
	void changeLocation(int x);
	char goList();
	Game(string name);
	~Game();
};

