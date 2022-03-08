#include "BewegungJagd.h"
#include "Vektor.h"
#include "Welt.h"
#include "Wesen.h"
#include <cmath>

void BewegungJagd::bewegen(float dt) {
	const Vektor& posBeute = _beute->position();
	Vektor& posJaeger = _wesen.position();
	Vektor d = posJaeger - posBeute;
	d *= _wesen.geschwindigkeit().betrag()/d.betrag();
	posJaeger -= d*dt;
	if(posJaeger.x<0) { posJaeger.x = 0; }
	else if(posJaeger.x>=_wesen.welt().breite()) {
		posJaeger.x = _wesen.welt().breite()-1;
	}
	if(posJaeger.y<0) { posJaeger.y = 0; }
	else if(posJaeger.y>=_wesen.welt().hoehe()) {
		posJaeger.y = _wesen.welt().hoehe()-1;
	}
}
