#include "AnzeigeWelt.h"
#include "Welt.h"
#include <iostream>
using namespace std;

extern sf::RenderWindow *window;

AnzeigeWelt::AnzeigeWelt() {
    if (!schriftart.loadFromFile("../data/arial.ttf")) {
        cout << "Fehler beim Laden der Schriftart.\n";
    }
}

void AnzeigeWelt::anzeigen(const Welt &welt) const {
    sf::Text t;
    t.setFont(schriftart);
    t.setString("Zeit: " + to_string(welt.zeit()) + "s");
    t.setCharacterSize(schriftgroesse);
    t.setFillColor(sf::Color::Red);
    window->draw(t);
}

