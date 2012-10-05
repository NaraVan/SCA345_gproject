/*
 * Card.h
 *
 *  Created on: Oct 1, 2012
 *      Author: r_conigl
 */

#include <string>
#include "Cardfunction.h"

using std::string;

#ifndef CARD_H_
#define CARD_H_

class Card {

public:
	enum cardType{OBJECT,WEAPON,ARMOUR,SPELL,EVENT,ENEMY,STRANGER,FOLLOWER};

	Card(string name, string description, int encounter, int number, cardType type,bool discardable,void (* evn)());
	Card(string n, string des, int p, int num, cardType t, bool disc, void (*evn)(),bool good, bool neu, bool evil);
	string getName();
	string getDescription();
	int getEncounter();
	int getRemaining();
	void dicrease();
	cardType getType();
	bool isDiscardable();
	void (*event)();

private:
	string name;
	string description;
	int encounter;
	int quantity;
	cardType type;
	bool discardable;
	bool permission[];



};

#endif /* CARD_H_ */
