#include "AnzeigeFressen.h"
#include "Vektor.h"
#include "Wesen.h"
#include <SFML/Graphics.hpp>

extern sf::RenderWindow* window;

const sf::Color AnzeigeFressen::_farbe = sf::Color(0, 150, 0);
const sf::Color& AnzeigeFressen::farbe() const { return AnzeigeFressen::_farbe; }

void AnzeigeFressen::anzeigen(float dt) {
    float radius = std::sqrt(wesen.energie());
    sf::CircleShape cs(radius);
    cs.setPosition(wesen.position().x, wesen.position().y);
    cs.setOrigin (radius, radius);
    cs.setFillColor(farbe());
    window->draw(cs);
};
