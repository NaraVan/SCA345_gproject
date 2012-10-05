/*
 * Spell.cpp
 *
 *  Created on: 2012-10-04
 *      Author: r_conigl
 */

#include "Spell.h"

Spell::Spell(string name, string description, int encounter, int number, cardType type,bool disc, void (*event)(), string permission):
Card(name,description,encounter,number,type, disc, event)
{
	preMove=static_cast<int>(permission[0]);
	postMove=static_cast<int>(permission[1]);
	preFight=static_cast<int>(permission[2]);
	postFight=static_cast<int>(permission[3]);
	endTurn=static_cast<int>(permission[4]);

}

