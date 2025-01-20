#include "Player.h"

void Player::Update(float dT) {
	HandleInput(dT);
}

void Player::HandleInput(float dT) {
    if (Keyboard::isKeyPressed(Keyboard::Z) && Joueur.getPosition().y > 0) {
        Joueur.move(0, -speed * dT);
    }

    if (Keyboard::isKeyPressed(Keyboard::S) && Joueur.getPosition().y < 850) {
        Joueur.move(0, speed * dT);
    }

    if (Keyboard::isKeyPressed(Keyboard::Q) && Joueur.getPosition().x > 0) {
        Joueur.move(-speed * dT, 0);
    }

    if (Keyboard::isKeyPressed(Keyboard::D) && Joueur.getPosition().x < 1550) {
        Joueur.move(speed * dT, 0);
    }
}

void Player::Draw(RenderWindow& window) {
	window.draw(Joueur);
}

void Player::SetSpeed(float x) {
	speed = x;
}

int Player::getHp() {
	return hp;
}

void Player::setHp(int x) {
	hp -= x;
	cout << "[Info] : PV restant(s) : " << hp << endl;
}