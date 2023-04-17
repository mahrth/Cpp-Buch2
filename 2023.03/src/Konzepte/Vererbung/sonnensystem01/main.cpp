#include "Sonnensystem.h" 
#include <iostream>
using namespace std;

int main () {
	Stern sonne{"Sonne", 333000, 0, 0.35, 0, 0}; 
	Sonnensystem sonnensystem{sonne}; 
	Planet merkur {"Merkur", 0.05527, 0.38709888, 984, 0.3825};
	Planet venus {"Venus", 0.81499, 0.72333193, 0.95, 0.9488};
	Planet erde {"Erde", 1, 1, 1, 1};
	Planet mars {"Mars", 0.10745, 1.5236621, 714, 0.5326};
	Planet jupiter {"Jupiter", 317.84, 5.2033623, 241, 11209};
	Planet saturn {"Saturn", 95169, 9.537069, 125, 9449};
	Planet uranus {"Uranus", 14539, 19.191261, 0.23, 4007};
	Planet neptun {"Neptun", 17149, 30.06896, 0.3, 3883};
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
