#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"
#include <vector>

using namespace std;
using namespace sf;

class Ennemy : public Entity {
public:

	void Update(float dT) override = 0;
	void Draw(RenderWindow& window) override = 0;

};
