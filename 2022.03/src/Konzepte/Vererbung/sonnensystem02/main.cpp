#include "Sonnensystem.h" 
#include <iostream>

int main () {
	Stern s1{"S1", 192812, 0.02, 0.7, 2411, 3.9E+26}; 
	Stern s2{"S2", 272317, 0.01, 0.7, 5312, 8.2E+26}; 
	Sonnensystem sonnensystem(s1); 
	sonnensystem.fuegeHinzu(s2);
	Planet p1{"P1", 0.7, 0.8, 1.1, 1.3};
	Mond m1{"M1", 15, 16, 17, 18};
	p1.fuegeHinzu(m1);
	Mond m2{"M2", 0.03, 0.08, 0.9, 0.04};
	p1.fuegeHinzu(m2);
	sonnensystem.fuegeHinzu(p1);
	Planet p2{"P2", 12.2, 234, 0.2, 261};
	sonnensystem.fuegeHinzu(p2);
	Asteroid a{"A", 0.00021, 92812, 0.8, 0.0003};
	sonnensystem.fuegeHinzu(a);
	std::cout << sonnensystem.text();
}
