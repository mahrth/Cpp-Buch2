#include "Signal.h"
#include "Dft.h"
#include "Diagramm.h"
#include <iostream>
using namespace std;

int main() {
	const int N = 32;
	const Signal signal{N, 2.0, 1.8*M_PI};
	Diagramm diagramm;
	diagramm.erstellen(signal, "Signal", "Zeit", "Amplitude");
	const Dft<N,N> dft;
	Signal spektrum = dft.dft(signal);
	diagramm.erstellen(spektrum, "Spektrum", "Schwingungsmode", "Amplitude");
	Signal::Paar max = spektrum.max();
	cout << "Max. Amplitude " << max.y.betrag() << " bei Schwingungsmode " << max.x << endl;
}
