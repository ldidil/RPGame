#include "Game.h"
#include "Gig.h"
#include "Ms.h"
#include "Shop.h"
#include "Room.h"
#include "Locations.h"
#include "YourCharacter.h"
#include <fstream>
#include <Windows.h>
#include "IncorectValueException.h"
using namespace std;

void Game::introduce()
{
	fstream plik; 
	char go;
	try 
	{
		go=goList();
		char x;
		plik.open("game.txt", ios::in);
		while (true) {
			plik.get(x);
			if (x == go) {

				while (x != '*') {
					plik.get(x);
					if (x != '*') cout << x;
					Sleep(5);

				}
				plik.close();
				break;
			}
		}
	}
	catch (IncorectValueException e)
	{
		e.displayException();
	}
	
}

void Game::locationOptions()
{
}

void Game::displayInfo()
{
	cout << "Your name: " << you.getName() << endl;
	cout << "Money: " << you.getBudget() << endl << endl;

	cout << "Fun : " << you.getFun() << endl;
	cout << "Energy lvl: ";
	int i = you.getHp();
		while (i > 0) {
			cout << "*";
			i--;
		}
	cout << endl;
	cout << "ALkohol lvl: ";
	i = you.getAlkoholLvl();
		while (i > 0) {
			cout << "%";
			i--;
		}
		cout << endl << endl;
		cout << "Acctual Location: " << you.getLocation() << endl;
}
void Game::changeLocation(int x)
{

	if (x == 1) {
		you.goTo(shop);
	}
	if (x == 2) {
		you.goTo(gig);
	}

}

char Game::goList()
{
	cout << "[1] Miasteczko Studenckie" << endl;
	cout << "[2] Sklep Lewiatan" << endl;
	cout << "[3] Koncert" << endl;
	cout << "[4] Twoj pokoj" << endl;
	char x; cin >> x;
	if (x == '1') { you.goTo(ms); }
	else if (x == '2') { you.goTo(shop); }
	else if (x == '3') { you.goTo(gig); }
	else if (x == '4') { you.goTo(room); }
	else {
		throw new IncorectValueException;
	}

	return x;
}

Game::Game(string name){
	YourCharacter you1(name, room);
	this->you=you1;
}


Game::~Game()
{
}
