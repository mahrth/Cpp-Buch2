#include "BewegungRuhe.h"
#include "Vektor.h"
#include "Welt.h"
#include "Wesen.h"

std::default_random_engine BewegungRuhe::init(std::random_device{}());
std::uniform_real_distribution<float> BewegungRuhe::verteilung(0,1);

void BewegungRuhe::bewegen(float dt) {
    float breite = _wesen.welt().breite();
    float hoehe = _wesen.welt().hoehe();
	Vektor& position = _wesen.position();
	Vektor& geschwindigkeit = _wesen.geschwindigkeit();
	Vektor d = geschwindigkeit * dt;
	position += d;
	if(position.x<0) {
        position.x = 0;
        geschwindigkeit.x = -geschwindigkeit.x;
    }
	else if(position.x>=breite) {
        position.x = breite-1;
        geschwindigkeit.x = -geschwindigkeit.x;
    }
	else {
		if(verteilung(init)>0.95f) geschwindigkeit.x = -geschwindigkeit.x;
    }
	if(position.y<0) {
        position.y = 0;
        geschwindigkeit.y = -geschwindigkeit.y;
    }
	else if(position.y>=hoehe) {
        position.y = hoehe-1;
        geschwindigkeit.y = -geschwindigkeit.y;
    }
	else {
		if(verteilung(init)>0.95f) geschwindigkeit.y = -geschwindigkeit.y;
    }
}
