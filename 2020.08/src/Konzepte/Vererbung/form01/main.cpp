#include "Kreis.h"
#include "Rechteck.h"

int main() {
	Kreis kreis{Vektor{5.0,6.0},Vektor{1.0,-1.0},7};
	Rechteck rechteck{Vektor{},Vektor{-1.0,1.0},4,3};
	double t = 0;
	const double dt = 1.0;
	for(unsigned int i=0; i<3; i++) {
		cout << "t=" << t << ":\n";
		kreis.zeichnen();
		rechteck.zeichnen();
		kreis.bewegen(dt);
		rechteck.bewegen(dt);
		t += dt;
	}
}

