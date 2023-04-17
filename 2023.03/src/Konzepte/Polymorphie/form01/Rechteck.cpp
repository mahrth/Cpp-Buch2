#include "Rechteck.h"
#include <iostream>
#include <iomanip>
using namespace std;

Rechteck::Rechteck(const Vektor& x, const Vektor& v, double b, double h) : FormImpl(x,v), _breite(b), _hoehe(h) {
	cout << "Konstruktor Rechteck: b=" << b << ", h=" << h << endl;
}

Rechteck::~Rechteck() {
	cout << "Destruktor Rechteck\n";
}

void Rechteck::anzeigen() const {
	cout << "Rechteck mit Breite " << fixed << setprecision(1) << _breite << " und Höhe " << _hoehe << " an Position " << position().text() << endl;
}
