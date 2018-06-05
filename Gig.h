#pragma once
#include "Locations.h"
class Gig :
	public Locations
{
public:
	Gig(string name = "Scena AGH");
	void goToConcert();
	~Gig(); 
};

