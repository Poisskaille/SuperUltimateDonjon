#pragma once
#include "Ennemy.h"

class Chasing : public Ennemy {
private:
	int speed;
	CircleShape bodyennemy;
	Player* p;
public:

	Chasing(int s, Player* _p) : speed(s), p(_p) {
		bodyennemy.setRadius(20);
		bodyennemy.setFillColor(Color::Green);
		bodyennemy.setPosition((rand() % 900), (rand() % 500));
	}
	~Chasing() {}

	void Update(float dT) override;
	void Draw(RenderWindow& window) override;

	void Chase(float dT);
};