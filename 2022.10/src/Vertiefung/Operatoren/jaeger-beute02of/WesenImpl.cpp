#include "Welt.h"
#include "WesenImpl.h"
#include "ofGraphics.h"
#include <limits>
using namespace std;

default_random_engine WesenImpl::init(random_device{}());
uniform_real_distribution<float> WesenImpl::verteilung(0,1);

WesenImpl::WesenImpl(Welt& w, const Vektor& p, const Vektor& g, float e, float s) : _welt(w), _energie(e), _sichtradius(s), _position(p), _geschwindigkeit(g) {}

void WesenImpl::naechsterSchritt(float dt) {
	Wesen *jaeger, *beute;
	untersucheUmfeld(jaeger, beute);
	if(jaeger != nullptr) {	fliehen(*jaeger, dt); }
	else if(beute != nullptr) {
		if(_position.abstandQuadrat(beute->position())<_welt.fressAbstandQuadrat()) {
			_welt.fressen(*this, *beute);
		}
		else { jagen(*beute, dt); }
	}
	else { ruhen(dt); }
}

void WesenImpl::untersucheUmfeld(Wesen*& jaeger, Wesen*& beute) {
	jaeger = nullptr;
	beute = nullptr;
	float dJaeger = numeric_limits<float>::max();
	float dBeute = numeric_limits<float>::max();
	vector<Wesen*> inSicht = _welt.wesenInSicht(*this);
	for(Wesen* w : inSicht) {
		float d = _position.abstand(w->position());
		if (*w > *this) {
			if (d < dJaeger) {
				jaeger = w;
				dJaeger = d;
			}
		}
		else if (*w < *this) {
			if (d < dBeute) {
				beute = w;
				dBeute = d;
			}
		}
	}
}

void WesenImpl::fliehen(Wesen& jaeger, float dt) {
	Vektor& posBeute = _position;
	const Vektor& posJaeger = jaeger.position();
	Vektor d = posJaeger - posBeute;
	d *= _geschwindigkeit.betrag()/d.betrag();
	posBeute -= d*dt;
	if(posBeute.x<0) { posBeute.x = 0; }
	else if(posBeute.x>=_welt.breite()) {
		posBeute.x = _welt.breite()-1; 
	}
	if(posBeute.y<0) { posBeute.y = 0; }
	else if(posBeute.y>=_welt.hoehe()) { 
		posBeute.y = _welt.hoehe()-1; 
	}
	_farbe = ofColor(0, 0, 255);
}

void WesenImpl::jagen(Wesen& beute, float dt) {
	const Vektor& posBeute = beute.position();
	Vektor& posJaeger = _position;
	Vektor d = posJaeger - posBeute;
	d *= _geschwindigkeit.betrag()/d.betrag();
	posJaeger -= d*dt;
	if(posJaeger.x<0) { posJaeger.x = 0; }
	else if(posJaeger.x>=_welt.breite()) {
		posJaeger.x = _welt.breite()-1; 
	}
	if(posJaeger.y<0) { posJaeger.y = 0; }
	else if(posJaeger.y>=_welt.hoehe()) {
		posJaeger.y = _welt.hoehe()-1; 
	}
	_farbe = ofColor(255, 0, 0);
}

void WesenImpl::ruhen(float dt) {
	const float breite = _welt.breite();
	const float hoehe = _welt.hoehe();
	_position += (_geschwindigkeit * dt);
	if(_position.x<0) {
		_position.x = 0;
		_geschwindigkeit.x = -_geschwindigkeit.x;
	}
	else if(_position.x>=breite) {
		_position.x = breite-1;
		_geschwindigkeit.x = -_geschwindigkeit.x;
	}
	else if(verteilung(init)>0.95f) { _geschwindigkeit.x = -_geschwindigkeit.x; }
	if(_position.y<0) {
		_position.y = 0;
		_geschwindigkeit.y = -_geschwindigkeit.y;
	}
	else if(_position.y>=hoehe) {
		_position.y = hoehe-1;
		_geschwindigkeit.y = -_geschwindigkeit.y;
	}
	else if(verteilung(init)>0.95f) { _geschwindigkeit.y = -_geschwindigkeit.y;	}
	_farbe = ofColor(100, 100, 100);
}

void WesenImpl::anzeigen() {
	const int alpha = 100;
	ofSetColor(_farbe, alpha);
	ofFill();
	ofSetCircleResolution(100);
	ofDrawCircle(_position.x, _position.y, _sichtradius);
	ofSetColor(_farbe);
	ofFill();
	ofSetCircleResolution(100);
	ofDrawCircle(_position.x, _position.y, std::sqrt(_energie));
};
