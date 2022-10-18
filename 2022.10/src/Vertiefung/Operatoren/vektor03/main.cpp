#include "Vektor.h"
#include <iostream>
using namespace std;

int main() {
	Vektor a{"a",{1,2}};
	Vektor b{"b",{3}};
	const Vektor c{"c",{4,5,6}};
	b = a;
	b = b;
	a = b = c;
	Vektor d = a;
	cout << "ENDE\n";	
} 
