/*
 * Card.cpp
 *
 *  Created on: Oct 1, 2012
 *      Author: r_conigl
 */

#include "Card.h"

Card::Card(string n, string des, int p, int num, cardType t, bool disc, void (*evn)()) {
	name=n;
	description=des;
	encounter=p;
	quantity = num;
	type=t;
	discardable=disc;
	event=evn;
	permission = {true,true,true};
}

Card::Card(string n, string des, int p, int num, cardType t, bool disc, void (*evn)(),bool good, bool neu, bool evil) {
	name=n;
	description=des;
	encounter=p;
	quantity = num;
	type=t;
	discardable=disc;
	event=evn;
	permission = {good,neu,evil};
}

string Card::getName(){
	return name;
}

string Card::getDescription(){
	return description;
}

int Card::getEncounter(){
	return encounter;
}

int Card::getRemaining(){
	return quantity;
}

bool Card::isDiscardable(){
	return discardable;
}

void Card::dicrease(){
	quantity--;
}

Card::cardType Card::getType(){
	return type;
}
