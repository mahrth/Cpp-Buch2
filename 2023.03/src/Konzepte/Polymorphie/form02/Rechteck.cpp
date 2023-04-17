#include "Rechteck.h"
#include <iostream>
#include <iomanip>
using namespace std;

Rechteck::Rechteck(Welt& welt, const Vektor& x, const Vektor& v, double b, double h) : FormImpl(welt,x,v), _breite(b), _hoehe(h) {
	cout << "Konstruktor Rechteck: b=" << b << ", h=" << h << endl;
}

Rechteck::~Rechteck() {
	cout << "Destruktor Rechteck\n";
}
