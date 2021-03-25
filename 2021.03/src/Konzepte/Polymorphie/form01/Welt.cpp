#include "Welt.h"
#include "Kreis.h"
#include "Rechteck.h"
#include <random>
using namespace std;

Welt::Welt(unsigned int anzahlFormen) {
	random_device initialisierung;
	mt19937 generator(initialisierung());
	uniform_int_distribution<unsigned int> verteilungAnzahlKreise(1,anzahlFormen-1);
	uniform_real_distribution<double> verteilungGeschwindigkeit(-1.0,+1.0);
	const unsigned int anzahlKreise = verteilungAnzahlKreise(generator);
	const unsigned int anzahlRechtecke = anzahlFormen - anzahlKreise;
	for(unsigned int i=0; i<anzahlKreise; i++){
		const double radius = 1.0; 
		Vektor geschwindigkeit{verteilungGeschwindigkeit(generator), verteilungGeschwindigkeit(generator)};
		form.push_back(new Kreis{Vektor{}, geschwindigkeit, radius});
	} 
	for(unsigned int i=0; i<anzahlRechtecke; i++){
		const double breite = 1.0; 
		const double hoehe = 1.0; 
		Vektor geschwindigkeit{verteilungGeschwindigkeit(generator), verteilungGeschwindigkeit(generator)};
		form.push_back(new Rechteck{Vektor{}, geschwindigkeit, breite, hoehe});
	} 		
}

Welt::~Welt() {
	for(auto f : form) { delete f;	}
}

void Welt::anzeigen() {
	for(auto f : form) { f->anzeigen(); } 
}	

void Welt::naechsterSchritt(double dt) {
	for(auto f : form) { f->bewegen(dt); } 
	t += dt;
}	
