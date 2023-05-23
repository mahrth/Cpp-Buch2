#include "Signal.h"
#include <cmath>
using namespace std;

Signal::Signal(size_t N, double m, double p) {
	const double dt = 1.0;
	for(size_t n=0; n<N; n++) {
		double w = 2*M_PI*m*n/N + p;
		werte.push_back(Paar{dt*n, Komplex{cos(w), sin(w)}});
	}
}

Signal::Paar Signal::max() {
	double maxBetrag = 0;
	int maxIndex = 0;
	for(unsigned int i=0; i<werte.size(); i++) {
		if(werte[i].y.betrag()>maxBetrag) {
			maxBetrag = werte[i].y.betrag();
			maxIndex = i;
		}
	}
	return werte[maxIndex];
}

ostream& operator<<(ostream& os, const Signal& s) {
	for(auto w : s.werte) { os << w << endl; }
	return os;
}
