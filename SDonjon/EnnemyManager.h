#pragma once

#include "Chasing.h"
#include "Patrol.h"

class EnnemyManager {
private:
	Clock clock;
	vector<unique_ptr<Ennemy>>AllEnnemy;

public:

	void AddPatrol(int nb, Player* p);
	void AddChasing(int nb, Player* p);
	void DisplayAll(RenderWindow& window);
	void UpdateAll();

};