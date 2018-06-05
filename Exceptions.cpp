#include "Exceptions.h"
#include <iostream>
#include <string>
using namespace std;

void Exceptions::displayException()
{
	cout << "ERROR - " << nameException;
}

Exceptions::Exceptions()
{
	this->nameException = "other exception";
}


Exceptions::~Exceptions()
{
}
