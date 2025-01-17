#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int main() {

    RenderWindow window(VideoMode(1000, 1000), "Super Donjon",);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close(); 
        }


        window.clear();
        window.display();
    }

    return 0;
}