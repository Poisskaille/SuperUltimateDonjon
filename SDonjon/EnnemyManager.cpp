#include "EnnemyManager.h"

void EnnemyManager::AddPatrol(int nb, Player* p) {
    for (int i = 0; i < nb; i++) {
        AllEnnemy.push_back(make_unique<Patrol>((rand() % 20) + 1, p));
    }
    cout << "[Info] : Un total de " << nb << " Patrol a ete ajoute" << endl;
}

void EnnemyManager::AddChasing(int nb, Player* p) {
    for (int i = 0; i < nb; i++) {
        AllEnnemy.push_back(make_unique<Chasing>((rand() % 20) + 1, p));
    }
    cout << "[Info] : Un total de " << nb << " Chasing a ete ajoute" << endl;
}

void EnnemyManager::DisplayAll(RenderWindow& window) {
	for (auto& misery : AllEnnemy) {
		misery->Draw(window);
	}
}

void EnnemyManager::UpdateAll() {
    float dT = clock.restart().asSeconds();
	for (auto& ennemi : AllEnnemy) {
		ennemi->Update(dT);
	}
}