#include "FormImpl.h"
#include <iostream>
using namespace std;

FormImpl::FormImpl(const Vektor& x, const Vektor& v) 
	: _position(x), _geschwindigkeit(v) {
	cout << "Konstruktor FormImpl: position=" 
		<< _position.text() 
		<< ", geschwindigkeit=" 
		<< _geschwindigkeit.text() 
		<< endl;
}

FormImpl::~FormImpl() {
	cout << "Destruktor FormImpl\n";
}

void FormImpl::bewegen(double dt) {
	_position = _position.add(_geschwindigkeit.mul(dt));
}
