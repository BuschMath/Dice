#include "die.h"

die::die()
{
	nSides = 6;
	srand(time(NULL));
}

die::die(int nSides_)
{
	nSides = nSides_;
	srand(time(NULL));
}

int die::Roll()
{
	return rand() % nSides + 1;
}
