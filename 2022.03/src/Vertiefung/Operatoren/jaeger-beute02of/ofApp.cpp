#include "ofApp.h"
#include <vector>
#include "WeltImpl.h"

void ofApp::setup() {
	ofBackground(255, 255, 255);
	ofSetWindowTitle("Jäger und Beute");
	ofSetFrameRate(60);
	welt = new WeltImpl(ofGetWidth(),ofGetHeight(),30);
}
void ofApp::update() {
	dt = static_cast<float>(ofGetLastFrameTime()*1000);
	welt->naechsterSchritt(dt);
}
void ofApp::draw() { welt->anzeigen(); }
void ofApp::exit() { delete welt; }
