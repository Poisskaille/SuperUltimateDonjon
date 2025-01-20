#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>

using namespace std;
using namespace sf;

class Entity {
public:
	~Entity(){}
	virtual void Update(float dT) = 0;

	virtual void Draw(RenderWindow& window) = 0;
};

