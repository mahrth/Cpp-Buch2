#include "AnzeigeWelt.h"
#include "Welt.h"
#include "ofGraphics.h"
#include <string>

AnzeigeWelt::AnzeigeWelt() : schriftfarbe(ofColor::black) {
    schriftart.load("arial.ttf", schriftgroesse);
}

void AnzeigeWelt::anzeigen(const Welt& welt) const {
    ofSetColor(schriftfarbe);
    schriftart.drawString("Zeit: " + std::to_string(welt.zeit()),10,10+schriftgroesse);
}

