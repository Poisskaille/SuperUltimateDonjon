#pragma once
#include "Ennemy.h"

class Patrol : public Entity {
private:

public:
	void Update(float dT) override = 0;
	void Draw(RenderWindow& window) override = 0;
};