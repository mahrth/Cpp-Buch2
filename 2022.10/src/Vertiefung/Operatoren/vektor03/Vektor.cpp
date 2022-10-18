#include "Vektor.h"
#include <iostream>
#include <sstream>
using namespace std;

Vektor::Vektor(const string& name, initializer_list<int> liste) : laenge(liste.size()), schreibPosition(0), name(name) {
	cout << "Konstruktor " << name << endl;
	werte = new int[laenge];
	for(auto e : liste) {
		werte[schreibPosition++] = e; 
	}
}	

Vektor::Vektor(const Vektor& v) : laenge(v.laenge), schreibPosition(v.schreibPosition) {
	cout << "Kopierkonstruktor " << v.name << endl;
	werte = new int[laenge]; 
	for(unsigned int i=0; i<laenge; i++) {
		this->werte[i] = v.werte[i];
	}		
}

Vektor::~Vektor() {
	cout << "Destruktor " << name << endl;		
	delete[] werte;
}	

Vektor& Vektor::operator=(const Vektor& v) {
	cout << name << " = " << v.name;
	if(this==&v) {
		cout << ": Selbstzuweisung verhindert\n";
	}
	else {
		cout << endl;
		delete[] werte;
		laenge = v.laenge;
		schreibPosition = v.schreibPosition;
		werte = new int[v.laenge]; 
		for(unsigned int i=0; i<laenge; i++) {
			this->werte[i] = v.werte[i];
		}		
	}
	return *this;
}

