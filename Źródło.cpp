#include <iostream>
#include "Game.h"
#include <fstream>
#include <cstdlib>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	fstream plik;
	char x =' ';
	plik.open("start.txt", ios::in);
			while (x != '*') {
			plik.get(x);
			if (x != '*' )cout << x;
			Sleep(5);
			}
	string name;
	cin >> name;
	Game g1(name);
	plik.get(x);

	while (x != '*') {
		plik.get(x);
		if (x != '*')cout << x;
		Sleep(5);
	}
	plik.close();
	system("PAUSE");
	system("CLS");

	while (true) {
		g1.displayInfo();
		g1.introduce();
		system("PAUSE");
		system("CLS");
	}
	
	return 0;
}