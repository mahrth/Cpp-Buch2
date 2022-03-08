#include <SFML/Graphics.hpp>
#include "WeltImpl.h"
using namespace sf;

RenderWindow* window = nullptr;

int main() {
    const double b = 800, h = 600;
    WeltImpl welt{Vektor{b, h}, 100};

    ContextSettings cs;
    cs.antialiasingLevel = 2;
    VideoMode vm(b, h);
    RenderWindow window(vm, "form03sfml", Style::Default, cs);
    window.setFramerateLimit(60);
    ::window = &window;

    Clock clock;
    Time t1 = clock.getElapsedTime();

    while (window.isOpen()) {
        Event e;
        while (window.pollEvent(e)) {
            if (e.type == Event::Closed || (e.type == Event::KeyPressed && e.key.code == Keyboard::Escape)) {
                window.close();
            }
        }

        window.clear(Color::White);
        welt.anzeigen();
        window.display();
        Time t2 = clock.getElapsedTime();
        welt.naechsterSchritt(t2.asSeconds() - t1.asSeconds());
        t1 = t2;
    }
}
