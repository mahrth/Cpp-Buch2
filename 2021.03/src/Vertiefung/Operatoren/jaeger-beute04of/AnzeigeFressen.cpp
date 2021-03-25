#include "AnzeigeFressen.h"
#include "Vektor.h"
#include "Wesen.h"
#include "ofGraphics.h"

const ofColor AnzeigeFressen::_farbe = ofColor(0, 150, 0);
const ofColor& AnzeigeFressen::farbe() const { return AnzeigeFressen::_farbe; }

void AnzeigeFressen::anzeigen(float dt) {
	ofSetColor(farbe());
	ofFill();
	ofSetCircleResolution(100);
	ofDrawCircle(wesen.position().x, wesen.position().y, std::sqrt(wesen.energie()));
};
