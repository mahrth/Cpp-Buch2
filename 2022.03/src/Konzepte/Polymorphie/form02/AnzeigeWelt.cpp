#include "AnzeigeWelt.h"
#include "Welt.h"
#include <iostream>
using namespace std;

AnzeigeWelt::AnzeigeWelt() {
}

void AnzeigeWelt::anzeigen(const Welt& welt) const {
	cout << "Zeit: " << welt.zeit() << ":\n";
}

