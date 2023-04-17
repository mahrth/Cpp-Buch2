#include "Welt.h"
#include "WesenImpl.h"
#include "ZustandJagd.h"
#include "ZustandFlucht.h"
#include "ZustandFressen.h"
#include "ZustandRuhe.h"
#include <limits>
#include <iostream>
using namespace std;

WesenImpl::WesenImpl(Welt& welt, const Vektor& position, const Vektor& geschwindigkeit, float energie, float sichtweite) : _welt(welt), _energie(energie), _position(position), _geschwindigkeit(geschwindigkeit), _sichtradius(sichtweite) {
	_zustandAngriff = new ZustandJagd(*this);
	_zustandFlucht = new ZustandFlucht(*this);
	_zustandFressen = new ZustandFressen(*this);
	_zustandRuhe = new ZustandRuhe(*this);
	_zustand = _zustandRuhe;
}

WesenImpl::~WesenImpl() {
	delete _zustandAngriff;
	delete _zustandFlucht;
	delete _zustandFressen;
	delete _zustandRuhe;
}

void WesenImpl::anzeigen(float dt) {
	_zustand->anzeigen(dt);
}

void WesenImpl::naechsterSchritt(float dt) {
	_zustand->naechsterSchritt(dt);
}

void WesenImpl::setzeZustandRuhe() {
	_zustand = _zustandRuhe;
}
void WesenImpl::setzeZustandAngriff(Wesen& beute) {
	_zustandAngriff->beute(beute);
	_zustand = _zustandAngriff;
}
void WesenImpl::setzeZustandFlucht(Wesen& jaeger) {
	_zustandFlucht->jaeger(jaeger);
	_zustand = _zustandFlucht;
}
void WesenImpl::setzeZustandFressen() {
	_zustand = _zustandFressen;
}

