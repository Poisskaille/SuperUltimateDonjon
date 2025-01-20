#pragma once
#include "Ennemy.h"

class Patrol : public Ennemy {
private:
	int speed;
	CircleShape bodyennemy;
	Player* p;
public:

	Clock delay;
	
	Patrol(int s, Player* _p) : speed(s), p(_p) {
		bodyennemy.setRadius(20);
		bodyennemy.setFillColor(Color::Red);
		bodyennemy.setPosition((rand() % 900), (rand() % 500));
	}

	~Patrol(){}

	void Update(float dT)override;
	void Draw(RenderWindow& window) override;
	
	void Move();
	void CheckCollision();
};