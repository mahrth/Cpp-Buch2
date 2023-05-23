#pragma once
#include <SFML/Graphics.hpp>
class Kreis;

class AnzeigeKreis {
private:
    sf::Color farbe;
public:
    AnzeigeKreis();
    void anzeigen(const Kreis& kreis) const;
};
