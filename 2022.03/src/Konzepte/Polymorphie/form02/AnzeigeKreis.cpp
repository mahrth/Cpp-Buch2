#include "AnzeigeKreis.h"
#include "Kreis.h"
#include <iostream>
#include <iomanip>
using namespace std;

void AnzeigeKreis::anzeigen(const Kreis& kreis) const {
	cout << "Kreis mit Radius " << fixed << setprecision(1) << kreis.radius() << " an Position " << kreis.position().text() << endl;
}
