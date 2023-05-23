#include "Diagramm.h"
using namespace std;

int main() {
	const int N = 128;
	const double frequenz = 3.0;
	const double phase = 0.5;
	Signal signal{N, frequenz, phase};
	Diagramm diagramm;
	diagramm.erstellen(signal, "signal");
}
