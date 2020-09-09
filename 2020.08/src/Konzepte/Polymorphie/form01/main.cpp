#include "Welt.h"
#include <iostream>
using namespace std;

int main(){
	Welt welt{3};
	const double dt = 1.0;
	for(unsigned int i=0; i<3; i++) {
		cout << "Zeit: " << welt.zeit() << ":\n";
		welt.anzeigen();
		welt.naechsterSchritt(dt);
	}
}
