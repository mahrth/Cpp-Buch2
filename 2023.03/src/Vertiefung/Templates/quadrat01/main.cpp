#include "Komplex.h"
#include <iostream>
using namespace std;

int quadrat(const int& x) { return x*x; }
double quadrat(const double& x) { return x*x; }
Komplex quadrat(const Komplex& x) { return x*x; }

int main() {
	int i = 2;
	double d = 1.5;
	Komplex k{4.0,5.0};	
	cout << "quadrat(i): " << quadrat(i);
	cout << "\nquadrat(d): " << quadrat(d);
	cout << "\nquadrat(k): " << quadrat(k) << endl;
}
