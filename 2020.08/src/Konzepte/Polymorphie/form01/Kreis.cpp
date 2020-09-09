#include "Kreis.h"
#include <iostream>
#include <iomanip>
using namespace std;

Kreis::Kreis(const Vektor& x, const Vektor& v, double r) : FormImpl(x,v), _radius(r) {
	cout << "Konstruktor KreisImpl: r=" << r << endl;
}

Kreis::~Kreis() {
	cout << "Destruktor Kreis\n";
}

void Kreis::anzeigen() const {
	cout << "Kreis mit Radius " << fixed << setprecision(1) << _radius << " an Position " << position().text() << endl;
}
