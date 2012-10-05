/*
 * Enemy.cpp
 *
 *  Created on: 2012-10-04
 *      Author: r_conigl
 */

#include "Enemy.h"

Enemy::Enemy(string name, string description, int encounter, int number, cardType type, bool disc, enemyType type2, int power):
Card(name,description,encounter,number,type,disc,0)
{
	if(type2){
		strength=0;
		craft=power;
	}
	else{
		strength=power;
		craft=0;
	}
}

