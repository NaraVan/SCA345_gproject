/*
 * Deck.cpp
 *
 *  Created on: 2012-10-01
 *      Author: r_conigl
 */

#include "Deck.h"

Deck::Deck(){
	deck = new stack<Card*>();
}

Deck::~Deck() {
	// TODO Auto-generated destructor stub
}

void Deck::createCard(string name, string description, int encounter, int number, Card::cardType type,bool disc,void (*e)()){
	Card* c =new Card(name,description,encounter,number,type,disc,e);
	for(int i=0;i<number;i++){
		deck->push(c);
	}
}

void Deck::createCard(string name, string description, int encounter, int number, Card::cardType type,bool disc,Enemy::enemyType etype, int power){
	Card* c =new Enemy(name,description,encounter,number,type,disc,etype,power);
	for(int i=0;i<number;i++){
		deck->push(c);
	}
}

void Deck::createCard(string name, string description, int encounter, int number, Card::cardType type,bool disc,void (*e)(),string phase){
	Card* c =new Spell(name,description,encounter,number,type,disc,e,phase);
	for(int i=0;i<number;i++){
		deck->push(c);
	}
}

void Deck::createCard(string name, string description, int encounter, int number, Card::cardType type,bool disc,void (*e)(),bool g,bool n, bool ev){
	Card* c =new Card(name,description,encounter,number,type,disc,e,g,n,ev);
	for(int i=0;i<number;i++){
		deck->push(c);
	}
}
