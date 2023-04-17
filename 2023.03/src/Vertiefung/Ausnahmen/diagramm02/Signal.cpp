#include "Signal.h"
#include <cmath>
#include <iostream>
using namespace std;

Signal::Signal(const int N, const double freq, const double phase) {
	const double dt = 1.0;
	for(int n=0; n<N; n++) {
		double arg = 2*PI*freq*n/N + phase;
		Abtastwert a{Komplex{cos(arg), sin(arg)}, dt*n};
		werte.push_back(a);
	}
}

int Signal::laenge() const {
	return werte.size(); 
}

Abtastwert Signal::wert(const int pos) const {
	return werte[pos];
}

ostream& operator<<(ostream& os, const Signal& s) {
	for(int i=0; i<s.laenge(); i++) {
		os << s.wert(i) << endl;
	}
	return os;
}
