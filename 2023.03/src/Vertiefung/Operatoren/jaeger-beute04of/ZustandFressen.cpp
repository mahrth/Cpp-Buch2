#include "AnzeigeFressen.h"
#include "Vektor.h"
#include "Welt.h"
#include "Wesen.h"
#include "ZustandFressen.h"
#include "ZustandRuhe.h"
using namespace std;

const float ZustandFressen::zeitFressenMax = 1000;

ZustandFressen::ZustandFressen(WesenImpl& w) : Zustand(w, new AnzeigeFressen(w)), zeitFressen(0) {
	_bewegung = new BewegungStillstand(w);
}

void ZustandFressen::naechsterSchritt(float dt) {
	zeitFressen += dt;
	if(zeitFressen>zeitFressenMax) {
		wesen.setzeZustandRuhe();
		zeitFressen = 0;
	}
}
