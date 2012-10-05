/*
 * Cardfunction.h
 *
 *	Card function list.
 *	This is not a class, but a list of all the cards implementation.
 *
 *  Created on: Oct 1, 2012
 *      Author: r_conigl
 */

#ifndef CARDFUNCTION_H_
#define CARDFUNCTION_H_
#include "Card_global.h"

namespace cfn {

	//--------------- REFERENCES
	//Player calling_player;
	//Board board;

	//--------------- FUNCTIONS
	void acquisition();
	void alchemist();
	void alchemy();
	void amulet();
	void angel();
	void armour();
	void axe();

	void bag_of_gold();
	void bandit(); //Enemy
	void blizzard();
	void book_of_spells();

	void cave();
	void counterSpell();
	void cross();
	void cursed_by_a_hag();

	void destroy_magic();
	void destruction();
	void devil();
	void divination();

	void enchanter();
	void evil_darkness();

	void fairy();
	void fountain_of_wisdom();

	void ghost(); //Enemy
	void gnome();
	void guide();

	void healer();
	void healing();
	void helmet();
	void hermit();
	void hex();
	void holy_grail();
	void holy_lance();

	void immobility();
	void imp();
	void invisibility();

	void mage();
	void magic_belt();
	void magic_portal();
	void magic_stream();
	void magical_vortex();
	void maiden();
	void market();
	void marked_day();
	void marsh();
	void maze();
	void mephistopheles();
	void mercenary();
	void mesmerism();
	void mule();

	void nullify();

	void orb_of_knowledge();

	void pestilence();
	void phantom();
	void pixie();
	void poltergeist();
	void pool_of_life();
	void potion_of_strength();
	void perservation();
	void prince();
	void princess();
	void psionic_blast();

	void raft();
	void raiders();
	void random();
	void ring();
	void runesword();

	void serpent();
	void shadow();
	void shield();
	void shrine();
	void siren();
	void salomon_crown();
	void sorcerer();
	void storm();
	void sword();

	void talisman(); //object with no action
	void teleport();
	void temporal_warp();
	void toad(); // to be decided
	void two_bags_of_gold();

	void unicorn();

	void wand();
	void water_bottle();
	void witch();

} /* namespace cfn */
#endif /* CARDFUNCTION_H_ */
