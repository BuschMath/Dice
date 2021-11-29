#include "dice.h"

dice::dice()
{
	nDice = 1;
	Dice = new die[nDice];
	Dice[0].nSides = 6;
}

dice::dice(int nSides, int nDice_)
{
	nDice = nDice_;
	Dice = new die[nDice];

	for (int i = 0; i < nDice; i++)
	{
		Dice[i].nSides = nSides;
	}
}

int* dice::Roll()
{
	int* temp = new int[nDice];

	for (int i = 0; i < nDice; i++)
	{
		temp[i] = Dice->Roll();
	}

	return temp;
}
