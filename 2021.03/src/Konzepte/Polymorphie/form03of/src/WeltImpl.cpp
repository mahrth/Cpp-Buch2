#include "WeltImpl.h"
#include "Kreis.h"
#include "Rechteck.h"
#include <random>
using namespace std;

WeltImpl::WeltImpl(const Vektor& abmessung, int anzahlFormen) : _abmessung(abmessung) {
	random_device initialisierung;
	mt19937 generator(initialisierung());
	uniform_int_distribution<int> verteilungAnzahlKreise(1,anzahlFormen-1);
    uniform_int_distribution<int> verteilungGroesse(1,1+abmessung.x()/20);
    uniform_real_distribution<double> verteilungGeschwindigkeit(-10.0,+10.0);
	const int anzahlKreise = verteilungAnzahlKreise(generator);
	const int anzahlRechtecke = anzahlFormen - anzahlKreise;
    const Vektor startPosition{_abmessung.x()/2.0, _abmessung.y()/2.0};
    for(int i=0; i<anzahlKreise; i++){
        const double radius = verteilungGroesse(generator);
        const Vektor geschwindigkeit{verteilungGeschwindigkeit(generator), verteilungGeschwindigkeit(generator)};
        form.push_back(new Kreis{*this, startPosition, geschwindigkeit, radius});
	} 
	for(int i=0; i<anzahlRechtecke; i++){
        const double breite = verteilungGroesse(generator);
        const double hoehe = verteilungGroesse(generator);
        const Vektor geschwindigkeit{verteilungGeschwindigkeit(generator), verteilungGeschwindigkeit(generator)};
        form.push_back(new Rechteck{*this, startPosition, geschwindigkeit, breite, hoehe});
	} 		
}

WeltImpl::~WeltImpl() {
	for(auto f : form) { 
		delete f;
	}
}

void WeltImpl::anzeigen() {
	for(auto f : form) {  
		f->anzeigen(); 
	}
	anzeige.anzeigen(*this);
}

void WeltImpl::naechsterSchritt(double dt) {
	for(auto f : form) { 
		f->bewegen(dt); 
	}
	t += dt;
}	
