#pragma once
#include "Ennemy.h"

class Chasing : public Entity {
private:

public:

	void Update(float dT) override = 0;
	void Draw(RenderWindow& window) override = 0;
};