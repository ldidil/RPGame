#include "Shop.h"
#include "Beer.h"
#include "Vodka.h"



Alkohol* Shop::buy(int x)
{
	Alkohol* ptr;
	if (x == 1) {
		Beer b;
		ptr = &b;
		return ptr;
	}
	if (x == 2) {
		Vodka v;
		ptr = &v;
		return ptr;
	}
}

Shop::Shop(string name) : Locations(name){
}


Shop::~Shop()
{
}
