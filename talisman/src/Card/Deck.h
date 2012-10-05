/*
 * Deck.h
 *
 *  Created on: 2012-10-01
 *      Author: r_conigl
 */

#ifndef DECK_H_
#define DECK_H_

#include "Card_global.h"

using std::stack;
using ::Card;

class Deck{
public:
	Deck();
	virtual ~Deck();
	virtual void remove()=0;

private:
	stack<Card*> *deck;
	void createCard(string name, string description, int encounter, int number, Card::cardType type, bool discardable,void(*event)());
	void createCard(string name, string description, int encounter, int number, Card::cardType type,bool disc,Enemy::enemyType etype, int power);
	void createCard(string name, string description, int encounter, int number, Card::cardType type,bool discardable,void(*event)(),string spell_phase);
	void createCard(string name, string description, int encounter, int number, Card::cardType type,bool disc,void (*e)(),bool gool,bool neutral, bool evil);
};

#endif /* DECK_H_ */
