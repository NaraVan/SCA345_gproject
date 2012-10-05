/*
 * Spell.h
 *
 *  Created on: 2012-10-04
 *      Author: r_conigl
 */

#ifndef SPELL_H_
#define SPELL_H_

#include "Card_global.h"

class Spell: public Card {
public:
	Spell(string name, string description, int encounter, int number, cardType type,bool discardable, void (*event)(), string permission);
private:
	bool preMove;
	bool postMove;
	bool preFight;
	bool postFight;
	bool endTurn;
};

#endif /* SPELL_H_ */
