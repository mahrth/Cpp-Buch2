#include "Vektor.h"
#include "WeltImpl.h"
#include "WesenImpl.h"
#include <algorithm>
#include <vector>
using namespace std;

default_random_engine WeltImpl::init(random_device{}());
uniform_real_distribution<float> WeltImpl::verteilung(0,1);

WeltImpl::WeltImpl(float breite, float hoehe, int anzahlWesen) : _breite(breite), _hoehe(hoehe) {
	_groesse = std::sqrt(_breite*_breite + _hoehe*_hoehe);
	_fressAbstand = _groesse*0.01f;
	_fressAbstandQuadrat = _fressAbstand*_fressAbstand;
	for (int i=0; i<anzahlWesen; i++) {
        _wesen.push_back(wesenErzeugen());
    }
}

WeltImpl::~WeltImpl() {
	for (Wesen* w : _wesen) { delete w; }
}

void WeltImpl::anzeigen() {
	for (Wesen* w : _wesen) { w->anzeigen(); }
}

void WeltImpl::naechsterSchritt(float dt) {
	for (Wesen* w : _wesen) { 
		w->naechsterSchritt(dt);
	}
	vector<Wesen*> wesenKopie(_wesen);
	for (Wesen* w : wesenKopie) {
		if (w->energie() <= 0) {
			wesenVernichten(*w);
		}
	}
}

Wesen* WeltImpl::wesenErzeugen() {
	float energie = verteilung(init)*0.05f*_groesse;
	float sichtradius = verteilung(init)*0.1f*_groesse;
	Vektor position(verteilung(init)*_breite, verteilung(init)*_hoehe);
	float vMax = 0.05f + verteilung(init)*0.2f;
	Vektor geschwindigkeit(vMax, vMax);
	Wesen* wesen = new WesenImpl(*this, position, geschwindigkeit, energie, sichtradius);
	return wesen;
}

void WeltImpl::wesenVernichten(Wesen& w) {
	_wesen.erase(find(_wesen.begin(), _wesen.end(), &w));
	delete &w;
}

vector<Wesen*> WeltImpl::wesenInSicht(const Wesen& w) const {
	vector<Wesen*> wesenInSichtweite;
	for (Wesen* wesen : _wesen) {
		if (wesen != &w) {
			float d = wesen->position().abstand(w.position());
			if (d <= w.sichtradius()) {
				wesenInSichtweite.push_back(wesen);
			}
		}
	}
	return wesenInSichtweite;
}

void WeltImpl::fressen(Wesen& jaeger, Wesen& beute) {
    float deltaEnergie = beute.energie();
	if(deltaEnergie<0) { deltaEnergie = 0; }
    jaeger.energieAendern(deltaEnergie);
    beute.energieAendern(-deltaEnergie);
}
