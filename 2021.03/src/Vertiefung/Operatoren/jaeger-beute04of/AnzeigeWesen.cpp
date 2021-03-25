#include "AnzeigeWesen.h"
#include "Vektor.h"
#include "Wesen.h"
#include "ofGraphics.h"

void AnzeigeWesen::anzeigen(float dt) {
	const int alpha = 100;
	ofSetColor(farbe(), alpha);
	ofFill();
	ofSetCircleResolution(100);
	ofDrawCircle(wesen.position().x, wesen.position().y, wesen.sichtradius());
	ofSetColor(farbe());
	ofFill();
	ofSetCircleResolution(100);
	ofDrawCircle(wesen.position().x, wesen.position().y, std::sqrt(wesen.energie()));
};
