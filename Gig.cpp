#include "Gig.h"
#include <cstdlib>
#include <ctime>


Gig::Gig(string name) : Locations(name)
{
}

void Gig::goToConcert()
{
	srand(time(NULL));
	std::cout << "Wylosowanie pierwsze: " << std::rand() << std::endl;
	int liczba = std::rand();

}


Gig::~Gig()
{
}
