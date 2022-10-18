#include "AnzeigeWesen.h"
#include "Vektor.h"
#include "Wesen.h"
#include <SFML/Graphics.hpp>

extern sf::RenderWindow* window;

void AnzeigeWesen::anzeigen(float dt) {
    sf::Color alpha(farbe().r, farbe().g, farbe().b, 100);
    sf::CircleShape cs(wesen.sichtradius());
    cs.setPosition(wesen.position().x, wesen.position().y);
    cs.setOrigin (wesen.sichtradius(), wesen.sichtradius());
    cs.setFillColor(alpha);
    window->draw(cs);

    float radiusInnen = std::sqrt(wesen.energie());
    cs.setRadius(radiusInnen);
    cs.setOrigin (radiusInnen, radiusInnen);
    window->draw(cs);
};
