#include "Signal.h"
#include "Prozessor.h"
#include <iostream>
using namespace std;

int main() {
	Signal ein;
	for(size_t i=0; i<3; i++) {
		ein.anhaengen(1+2*i);
	}
	cout << "Eingang: " << ein.text();
	Prozessor prozessor;
	Signal aus = prozessor.verarbeiten(ein);
	cout << "\nAusgang: " << aus.text() << endl;
}
