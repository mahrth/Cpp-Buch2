#include "AnzeigeJagd.h"
#include "Vektor.h"
#include "AnzeigeFlucht.h"
#include "Welt.h"
#include "Wesen.h"
#include "ZustandJagd.h"
#include "ZustandFlucht.h"
#include "ZustandRuhe.h"
using namespace std;

ZustandFlucht::ZustandFlucht(WesenImpl& w) : Zustand(w, new AnzeigeFlucht(w)) {
	_bewegung = new BewegungFlucht(w);
}

void ZustandFlucht::naechsterSchritt(float dt) {
	untersucheUmfeld();
	Wesen* jaeger = naehestesStaerkereWesen();
	Wesen* beute = naehestesSchwaecheresWesen();
	if(jaeger != nullptr) { wesen.setzeZustandFlucht(*jaeger); }
	else if(beute != nullptr) { wesen.setzeZustandAngriff(*beute); }
	else { wesen.setzeZustandRuhe(); }
	wesen.zustand().bewegen(dt);
}
