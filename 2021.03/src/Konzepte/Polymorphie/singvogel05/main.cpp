#include "Nachtigall.h"
#include "Blaumeise.h"
#include "Benutzer.h"
#include <random>
#include <iostream>
using namespace std;

int main() {
	Nachtigall nachtigall;
	Blaumeise blaumeise;	
	Singvogel* singvogel;

	random_device init;
	mt19937 generator(init.operator()());
	uniform_int_distribution<int> verteilung(0,1);
	if(verteilung(generator)==0) {
		cout << "Wähle Nachtigall\n";
		singvogel = &nachtigall;
	}
	else {
		cout << "Wähle Blaumeise\n";
		singvogel = &blaumeise;
	}

	Benutzer benutzer;
	benutzer.f(*singvogel);	
}
