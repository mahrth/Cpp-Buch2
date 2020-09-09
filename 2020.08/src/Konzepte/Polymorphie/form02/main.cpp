#include "WeltImpl.h"

int main(){
	const Vektor abmessung{10, 10};
	WeltImpl welt{abmessung, 5};
	const double dt = 1.0;
	for(unsigned int i=0; i<3; i++) {
		welt.anzeigen();
		welt.naechsterSchritt(dt);
	}
}

