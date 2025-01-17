#pragma once
#include "Entity.h"

class Player : public Entity {
private:
	int hp;
	float speed;

public:
	Player(int h, float s): hp(h), speed(s) {

		Joueur.setSize(Vector2f(50, 50));
		Joueur.setFillColor(Color::Blue);
		Joueur.setPosition(Vector2f(500, 500));
	}

	~Player(){}
	RectangleShape Joueur;

	void Update(float dT)override;
	void Draw(sf::RenderWindow& window)override;
	void SetSpeed(float x);

};