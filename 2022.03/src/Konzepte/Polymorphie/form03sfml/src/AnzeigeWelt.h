#pragma once
#include <SFML/Graphics.hpp>
class Welt;

class AnzeigeWelt {
private:
    const sf::Color schriftfarbe;
    sf::Font schriftart;
    const int schriftgroesse = 24;
public:
    AnzeigeWelt();
    void anzeigen(const Welt &welt) const;
};
