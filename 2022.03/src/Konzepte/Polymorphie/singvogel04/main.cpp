#include "Nachtigall.h"
#include "Blaumeise.h"
#include "Benutzer.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
	Nachtigall nachtigall;
	Blaumeise blaumeise;
	Singvogel* singvogel;

	srand(time(0));
	if(rand()%2) {
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
