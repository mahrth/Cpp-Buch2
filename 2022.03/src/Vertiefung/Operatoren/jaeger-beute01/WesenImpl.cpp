#include "Welt.h"
#include "WesenImpl.h"
#include <limits>
#include <iostream>
using namespace std;

int WesenImpl::objektZaehler=0;
std::default_random_engine WesenImpl::init(std::random_device{}());
std::uniform_real_distribution<float> WesenImpl::verteilung(0,1);

ostream& operator<<(ostream& os, const Wesen& w) {
	os << "W" << w.id() << "[E=" << w.energie() << "]";
	return os;
}

WesenImpl::WesenImpl(Welt& welt, const Vektor& position, const Vektor& geschwindigkeit, float energie, float sichtweite) :
		_id(++objektZaehler), _welt(welt), _energie(energie), _position(position), _geschwindigkeit(geschwindigkeit), _sichtradius(sichtweite) {
}

void WesenImpl::anzeigen() {
	if(_ausgabe.str().size()>0) {
		cout << _ausgabe.str() << endl;
	}
	_ausgabe.str("");
}

void WesenImpl::naechsterSchritt(float dt) {
	Wesen *jaeger, *beute;
	untersucheUmfeld(jaeger, beute);
	if(jaeger != nullptr) { fliehen(*jaeger, dt); }
	else if(beute != nullptr) {
		if(_position.abstandQuadrat(beute->position())<_welt.fressAbstandQuadrat()) {
			_ausgabe << *this << " frisst " << *beute;
			_welt.fressen(*this, *beute);
		}
		else { jagen(*beute, dt); }
	}
	else { ruhen(dt); }
}

void WesenImpl::untersucheUmfeld(Wesen*& jaeger, Wesen*& beute) {
	jaeger = nullptr;
	beute = nullptr;
	float abstandNaehesterJaeger = numeric_limits<float>::max();
	float abstandNaehesteBeute = numeric_limits<float>::max();
	vector<Wesen*> wesenInSichtweite = _welt.wesenInSicht(*this);
	for(Wesen* w : wesenInSichtweite) {
		float abstand = _position.abstand(w->position());
		if (*w > *this) {
			if (abstand < abstandNaehesterJaeger) {
				jaeger = w;
				abstandNaehesterJaeger = abstand;
			}
		}
		else if (*w < *this) {
			if (abstand < abstandNaehesteBeute) {
				beute = w;
				abstandNaehesteBeute = abstand;
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
}

