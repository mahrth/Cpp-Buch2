#include "Vektor.h"
#include "Welt.h"
#include "Wesen.h"
#include "Zustand.h"
#include <limits>
#include <vector>
using namespace std;

void Zustand::untersucheUmfeld() {
	_naehestesStaerkereWesen = nullptr;
	_naehestesSchwaecheresWesen = nullptr;
	float abstandNaehestesStaerkereWesen = numeric_limits<float>::max();
	float abstandNaehestesSchwaechereWesen = numeric_limits<float>::max();

	vector<Wesen*> wesenInSichtweite = wesen.welt().wesenInSicht(wesen);
	for(Wesen* w : wesenInSichtweite) {
		float abstand = wesen.position().abstand(w->position());
		if (*w >= wesen) {
			if (abstand < abstandNaehestesStaerkereWesen) {
				_naehestesStaerkereWesen = w;
				abstandNaehestesStaerkereWesen = abstand;
			}
		}
		else if (*w < wesen) {
			if (abstand < abstandNaehestesSchwaechereWesen) {
				_naehestesSchwaecheresWesen = w;
				abstandNaehestesSchwaechereWesen = abstand;
			}
		}
	}
}
