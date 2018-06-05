#pragma once
#include "Student.h"
#include "Locations.h"
class YourCharacter : public Student
{
	Locations *location;
	int alkoholLvl;
	int fun;
	int budget;
	int hp;
	vector <Alkohol> alkohol;
	vector <Alkohol> emptyAlkohol;
public:
	void talk();
	string getName();
	int getAlkoholLvl();
	int getBudget();
	int getFun();
	int getHp();
	string getLocation();
	void addAlkohol(Alkohol a);
	void addEmptyAlkohol();
	void goTo(Locations &shop);
	YourCharacter(string name, Locations &location);
	YourCharacter();
	~YourCharacter();
};

