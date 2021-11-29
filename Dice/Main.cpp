#include "dice.h"
#include <iostream>

using namespace std;

int main()
{
	dice Dice(20, 2);

	int* outcome = new int[2];

	outcome = Dice.Roll();

	cout << "Die 1: " << outcome[0] << endl;
	cout << "Die 2: " << outcome[1] << endl;

	return 0;
}