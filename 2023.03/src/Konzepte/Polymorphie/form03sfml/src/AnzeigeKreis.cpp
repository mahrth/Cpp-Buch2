#include "AnzeigeKreis.h"
#include "Kreis.h"
#include "Farbfabrik.h"

extern sf::RenderWindow* window;

AnzeigeKreis::AnzeigeKreis() {
    farbe = farbfabrik.zufallsFarbe();
}

void AnzeigeKreis::anzeigen(const Kreis& kreis) const {
    sf::CircleShape cs(kreis.radius());
    cs.setFillColor(farbe);
    cs.setPosition(kreis.position().x(), kreis.position().y());
    window->draw(cs);
}
