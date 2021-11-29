#ifndef DICE_H
#define DICE_H

#include "die.h"

class dice
{
public:
	dice();
	dice(int nSides, int nDice_);

	int* Roll();

	int nDice;
	die* Dice;

private:

};

#endif // !DICE_H