#include <SFML/Graphics.hpp>
#include "WeltImpl.h"

sf::RenderWindow* window;

int main() {
    const float breite = 800;
    const float hoehe = 600;
    WeltImpl welt{breite, hoehe, 30};

    sf::ContextSettings settings;
    settings.antialiasingLevel = 2;
    sf::RenderWindow window(sf::VideoMode(breite, hoehe), "Jäger und Beute", sf::Style::Default, settings);
    ::window = &window;
    window.setFramerateLimit(60);

    sf::Clock clock;
    sf::Time t1 = clock.getElapsedTime();

    while (window.isOpen()) {
        sf::Event e;
        while (window.pollEvent(e)) {
            if (e.type == sf::Event::Closed || (e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::Escape)) {
                window.close();
            }
        }

        window.clear(sf::Color::White);
        welt.anzeigen();
        window.display();
        sf::Time t2 = clock.getElapsedTime();
        double dt = t2.asSeconds() - t1.asSeconds();
        welt.naechsterSchritt(1000*dt);
        t1 = t2;
    }
}
