#include "AnzeigeRechteck.h"
#include "Rechteck.h"
#include <iostream>
#include <iomanip>
using namespace std;

void AnzeigeRechteck::anzeigen(const Rechteck& rechteck) const {
	cout << "Rechteck mit Breite " << fixed << setprecision(1) << rechteck.breite() << " und Höhe " << rechteck.hoehe() << " an Position " << rechteck.position().text() << endl;
}
