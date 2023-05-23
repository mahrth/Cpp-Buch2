#include "Diagramm.h"
#include "GnuplotNichtGefunden.h"
using namespace std;

int main() {
	const int N = 128;
	const double frequenz = 3.0;
	const double phase = 0.5;
	Signal signal{N, frequenz, phase};
	Diagramm diagramm;
	try {
		diagramm.erstellen(signal, "signal");
	}
	catch(const GnuplotNichtGefunden& e) {
		cout << "Gnuplot kann nicht gefunden werden. Bitte Gnuplot in den Suchpfad aufnehmen.\n";
	}
	catch(const runtime_error& e) {
		cout << "runtime_error in main() gefangen: " << e.what() << endl;
	}
	catch(const logic_error& e) {
		cout << "logic_error in main() gefangen: " << e.what() << endl;
	}
}
