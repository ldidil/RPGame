#pragma once
#include "Locations.h"
#include "Alkohol.h"
class Shop : public Locations
{
public:
	Alkohol* buy(int x);
	Shop(string name= "Lewiatan");
	~Shop();
};

