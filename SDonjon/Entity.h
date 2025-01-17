#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class Entity {
public:
	~Entity(){}
	virtual void Update(float dT) = 0;

	virtual void Draw(sf::RenderWindow& window) = 0;
};

