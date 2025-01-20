#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include "EnnemyManager.h"

EnnemyManager manager;

using namespace std;
using namespace sf;

Player joueur(3, 2);

int main() {
    srand(time(NULL));

    RenderWindow window(VideoMode(1600, 900), "Super Donjon");
    window.setFramerateLimit(60);

    manager.AddPatrol(2, &joueur);
    manager.AddChasing(2,&joueur);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close(); 
        }

        joueur.Update(5);
        window.clear();

        joueur.Draw(window);
        manager.UpdateAll();
        manager.DisplayAll(window);
        
        window.display();
    }
    return 0;
}