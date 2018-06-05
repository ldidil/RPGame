#pragma once
#include <iostream>
using namespace std;
class Character
{
public:
	string name;
	virtual void talk() = 0;
	Character();
	~Character();
};

