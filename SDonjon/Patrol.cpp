#include "Patrol.h"

void Patrol::Update(float dT) {
	Move();
	CheckCollision();
}

void Patrol::Draw(RenderWindow& window) {
	window.draw(bodyennemy);
}

void Patrol::Move() {
	if (bodyennemy.getPosition().x < 0 || bodyennemy.getPosition().x > 1550) {
		if (delay.getElapsedTime().asSeconds() > 1) {
			cout << "[Update] Patrol Direction" << endl;
			speed = -speed;
			delay.restart();
		}
	}

	bodyennemy.move(-speed, 0);
}

void Patrol::CheckCollision() {
	if (p->Joueur.getGlobalBounds().intersects(bodyennemy.getGlobalBounds())) {
		cout << "Collision!" << endl;
		p->setHp(1);
	}
}