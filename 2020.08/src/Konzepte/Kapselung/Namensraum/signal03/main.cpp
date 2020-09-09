#include "Prozessor.h"
#include "Signal.h"
#include <iostream>
using namespace std;

int main() {
	Signalverarbeitung::Signal ein;
	for(int i=0; i<3; i++) { ein.anhaengen(1+2*i); }
	cout << "Eingang: " << ein.text();
	Signalverarbeitung::Prozessor prozessor;
	Signalverarbeitung::Signal aus = prozessor.verarbeiten(ein);
	cout << "\nAusgang: " << aus.text();
}
