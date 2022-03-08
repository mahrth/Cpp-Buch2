#include "AnzeigeJagd.h"
#include "AnzeigeRuhe.h"
#include "Vektor.h"
#include "Welt.h"
#include "Wesen.h"
#include "ZustandJagd.h"
#include "ZustandFlucht.h"
#include "ZustandRuhe.h"
#include <limits>
using namespace std;

ZustandRuhe::ZustandRuhe(WesenImpl& w): Zustand(w, new AnzeigeRuhe(w)) {
	_bewegung = new BewegungRuhe(w);
}

void ZustandRuhe::naechsterSchritt(float dt) {
	untersucheUmfeld();
	Wesen* jaeger = naehestesStaerkereWesen();
	Wesen* beute = naehestesSchwaecheresWesen();
	if(jaeger != nullptr) { wesen.setzeZustandFlucht(*jaeger); }
	else if(beute != nullptr) { wesen.setzeZustandAngriff(*beute); }
	else { wesen.setzeZustandRuhe(); };
	wesen.zustand().bewegen(dt);
}
