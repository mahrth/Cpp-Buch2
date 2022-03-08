#include "Prozessor.h"
#include <iostream>
using namespace std;
using namespace Signalverarbeitung; 

int main() {
	Signal ein; 
	for(unsigned int i=0; i<3; i++) { ein.anhaengen(1+2*i); }
	cout << "Eingang: " << ein.text();
	Prozessor prozessor; 
	Signal aus = prozessor.verarbeiten(ein); 
	cout << "\nAusgang: " << aus.text() << endl;
}
