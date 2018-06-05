#include "YourCharacter.h"
#include "Shop.h"
#include <vector>
using namespace std;


void YourCharacter::talk()
{
}

string YourCharacter::getName()
{
	return name;
}

int YourCharacter::getAlkoholLvl()
{
	return alkoholLvl;
}

int YourCharacter::getBudget()
{
	return budget;
}

int YourCharacter::getFun()
{
	return fun;
}

int YourCharacter::getHp()
{
	return hp;
}

string YourCharacter::getLocation()
{
	return location->getName();
}

void YourCharacter::addAlkohol(Alkohol a)
{
	alkohol.push_back(a);
}

void YourCharacter::addEmptyAlkohol()
{
}


void YourCharacter::goTo(Locations &location)
{
	this->location = &location;
}

YourCharacter::YourCharacter(string name, Locations &location)
{
	this->name = name;
	budget = 100;
	hp = 10;
	alkoholLvl = 3; 
	this->location = &location;
}

YourCharacter::YourCharacter()
{
}

YourCharacter::~YourCharacter()
{
}

