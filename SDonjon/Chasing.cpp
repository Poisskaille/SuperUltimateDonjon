#include "Chasing.h"

void Chasing::Update(float dT) {
	Chase(dT);
}

void Chasing::Draw(RenderWindow& window) {
	window.draw(bodyennemy);
}

void Chasing::Chase(float dT) {
    Vector2f ennemyPos = bodyennemy.getPosition();
    Vector2f playerPos = p->Joueur.getPosition();

    float deltaX = playerPos.x - ennemyPos.x;
    float deltaY = playerPos.y - ennemyPos.y;

    float distance = sqrt(deltaX * deltaX + deltaY * deltaY);

    if (distance > 0) {
        float directionX = deltaX / distance;
        float directionY = deltaY / distance;

        bodyennemy.move(directionX * 5, directionY * 5);
    }
}
