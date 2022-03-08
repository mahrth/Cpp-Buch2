#include "Benutzer.h"
#include <iostream>
using namespace std;

void Benutzer::f(const Singvogel& singvogel) const {	
	std::cout << "Der Singvogel singt: " << singvogel.singen() << endl;
}	
