#include "BewegungFlucht.h"
#include "Vektor.h"
#include "Welt.h"
#include "Wesen.h"
#include <cmath>

void BewegungFlucht::bewegen(float dt) {
	Vektor& posBeute = _wesen.position();
	const Vektor& posJaeger = _jaeger->position();
	Vektor d = posJaeger - posBeute;
	d *= _wesen.geschwindigkeit().betrag()/d.betrag();
	posBeute -= d*dt;
	if(posBeute.x<0) { posBeute.x = 0; }
	else if(posBeute.x>=_wesen.welt().breite()) {
		posBeute.x = _wesen.welt().breite()-1;
	}
	if(posBeute.y<0) { posBeute.y = 0; }
	else if(posBeute.y>=_wesen.welt().hoehe()) {
		posBeute.y = _wesen.welt().hoehe()-1;
	}
}
