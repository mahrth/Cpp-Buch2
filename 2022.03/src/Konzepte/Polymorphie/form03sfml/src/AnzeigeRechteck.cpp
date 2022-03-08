#include "AnzeigeRechteck.h"
#include "Rechteck.h"
#include "Farbfabrik.h"

extern sf::RenderWindow* window;

AnzeigeRechteck::AnzeigeRechteck() {
    farbe = farbfabrik.zufallsFarbe();
}

void AnzeigeRechteck::anzeigen(const Rechteck& r) const {
    sf::RectangleShape rs(sf::Vector2f(r.breite(), r.hoehe()));
    rs.setFillColor(farbe);
    rs.setPosition(r.position().x(), r.position().y());
    window->draw(rs);
}
