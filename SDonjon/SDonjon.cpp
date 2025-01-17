#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"

using namespace std;
using namespace sf;

int main() {

    Player joueur(3, 11);

    RenderWindow window(VideoMode(1600, 900), "Super Donjon");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close(); 
        }

        joueur.Update(5);
        window.clear();

        joueur.Draw(window);

        window.display();
    }
    return 0;
}