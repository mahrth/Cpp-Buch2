#include "ofApp.h"
#include "Vektor.h"
#include "WeltImpl.h"

void ofApp::setup() {
	ofBackground(255, 255, 255);
	ofSetWindowTitle("form03of");
	ofSetFrameRate(60);
	const int anzahlFormen = 100;
	const double breite = ofGetViewportWidth();
	const double hoehe = ofGetViewportHeight();
	const Vektor abmessung{breite, hoehe};
	welt = new WeltImpl{abmessung, anzahlFormen};
}

void ofApp::update() {
	welt->naechsterSchritt(dt);
}

void ofApp::draw() {
	welt->anzeigen();
}

void ofApp::exit() {
	if(welt!=nullptr) {
		delete welt;
	}
}
