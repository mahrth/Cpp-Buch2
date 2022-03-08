#include "FormImpl.h"
#include "Vektor.h"
#include <iostream>
using namespace std;

FormImpl::FormImpl(Welt& welt, const Vektor& x, const Vektor& v) : welt(welt), _position(x), _geschwindigkeit(v) {
	cout << "Konstruktor FormImpl: position=" << x.text() << ", geschwindigkeit=" << v.text() << endl;
}

FormImpl::~FormImpl() {
	cout << "Destruktor FormImpl\n";
}

void FormImpl::bewegen(double dt) {
	_position = _position.add(_geschwindigkeit.mul(dt));
	abprallen();
}

void FormImpl::abprallen() {
	const Vektor& abmessung = welt.abmessung();
	if(_position.x()<0 || _position.x()>=abmessung.x()) {
		_geschwindigkeit.x(-_geschwindigkeit.x());
	}
	if(_position.y()<0 || _position.y()>=abmessung.y()) {
		_geschwindigkeit.y(-_geschwindigkeit.y());
	}
}
