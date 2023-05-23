#include "AnzeigeJagd.h"
#include "Vektor.h"
#include "Welt.h"
#include "Wesen.h"
#include "ZustandJagd.h"
#include "ZustandFlucht.h"
#include "ZustandRuhe.h"
using namespace std;

ZustandJagd::ZustandJagd(WesenImpl& w) : Zustand(w, new AnzeigeJagd(w)) {
	_bewegung = new BewegungJagd(w);
}

void ZustandJagd::naechsterSchritt(float dt) {
	untersucheUmfeld();
	Wesen* jaeger = naehestesStaerkereWesen();
	Wesen* beute = naehestesSchwaecheresWesen();
	if(jaeger != nullptr) { wesen.setzeZustandFlucht(*jaeger); }
	else if(beute != nullptr) {
		if(wesen.position().abstandQuadrat(beute->position())<wesen.welt().fressAbstandQuadrat()) {
			wesen.welt().fressen(wesen, *beute);
			wesen.setzeZustandFressen();
		}
		else { wesen.setzeZustandAngriff(*beute); }
	}
	else { wesen.setzeZustandRuhe(); }
	wesen.zustand().bewegen(dt);
}
