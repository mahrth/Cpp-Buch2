#include "WeltImpl.h"
#include <iostream>
using namespace std;

int main( ){
	Welt* welt = new WeltImpl(1024,768,30);
	const float dt = 10;
	size_t anzahlWesen = welt->anzahlWesen(); 
	while(welt->anzahlWesen()>10) {
		if(welt->anzahlWesen()!=anzahlWesen) {
			anzahlWesen = welt->anzahlWesen();
			cout << "Anzahl Wesen: " << welt->anzahlWesen() << endl;
		}
		welt->naechsterSchritt(dt);
		welt->anzeigen();
	}		
	delete welt;
}
