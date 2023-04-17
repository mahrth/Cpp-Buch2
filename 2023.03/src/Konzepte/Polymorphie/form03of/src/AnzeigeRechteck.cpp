#include "AnzeigeRechteck.h"
#include "Rechteck.h"
#include "ofLog.h"
#include "ofMath.h"

AnzeigeRechteck::AnzeigeRechteck() {
    ofLog(OF_LOG_NOTICE, "Konstruktor Kreis");
    farbe.r = ofRandom(255);
    farbe.g = ofRandom(255);
    farbe.b = ofRandom(255);
    farbe.a = ofRandom(255);
}

void AnzeigeRechteck::anzeigen(const Rechteck& rechteck) const {
    ofSetColor(farbe);
    ofFill();
    ofDrawRectangle(rechteck.position().x(), rechteck.position().y(), rechteck.breite(), rechteck.hoehe());
}
