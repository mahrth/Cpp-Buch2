#include "Sonnensystem.h" 
#include <iostream>
using namespace std;

int main () {
	Stern sonne("Sonne"); 
	Sonnensystem sonnensystem(sonne); 
	Planet merkur("Merkur",0.39);
	Planet venus("Venus",0.72);
	Planet erde("Erde",1.0);
	Planet mars("Mars",1.72);
	Planet jupiter("Jupiter",5.20);
	Planet saturn("Saturn",9.53);
	Planet uranus("Uranus",19.2);
	Planet neptun("Neptun",30.1);
	sonnensystem.fuegeHinzu(merkur); 
	sonnensystem.fuegeHinzu(venus);
	sonnensystem.fuegeHinzu(erde);
	sonnensystem.fuegeHinzu(mars);
	sonnensystem.fuegeHinzu(jupiter);
	sonnensystem.fuegeHinzu(saturn);
	sonnensystem.fuegeHinzu(uranus);
	sonnensystem.fuegeHinzu(neptun);
	cout << sonnensystem.text();
}
