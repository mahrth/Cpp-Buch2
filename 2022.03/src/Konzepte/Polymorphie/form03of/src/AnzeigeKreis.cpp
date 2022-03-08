#include "AnzeigeKreis.h"
#include "Kreis.h"
#include "ofLog.h"
#include "ofMath.h"

AnzeigeKreis::AnzeigeKreis() {
	ofLog(OF_LOG_NOTICE, "Konstruktor Kreis");
	farbe.r = ofRandom(255);
	farbe.g = ofRandom(255);
	farbe.b = ofRandom(255);
	farbe.a = ofRandom(255);
}

void AnzeigeKreis::anzeigen(const Kreis& kreis) const {
	ofSetColor(farbe);
	ofFill();
	ofSetCircleResolution(100);
	ofDrawCircle(kreis.position().x(), kreis.position().y(), kreis.radius());
}
