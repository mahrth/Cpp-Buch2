#include "Kreis.h"
#include <iostream>
using namespace std;

Kreis::Kreis(Welt& welt, const Vektor& x, const Vektor& v, double r) : FormImpl(welt,x,v), _radius(r) {
	cout << "Konstruktor KreisImpl: r=" << r << endl;
}

Kreis::~Kreis() {
	cout << "Destruktor Kreis\n";
}
