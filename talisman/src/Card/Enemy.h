/*
 * Enemy.h
 *
 *  Created on: 2012-10-04
 *      Author: r_conigl
 */

#ifndef ENEMY_H_
#define ENEMY_H_

#include "Card.h"

class Enemy: public Card {
public:
	enum enemyType{STRENGTH,CRAFT};
	Enemy(string name, string description, int encounter, int number, cardType type, bool discardable, enemyType, int power);

private:
	int strength,craft;
};

#endif /* ENEMY_H_ */
