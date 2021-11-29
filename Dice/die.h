#ifndef DIE_H
#define DIE_H

#include <stdlib.h>
#include <time.h>

class die
{
public:
	die();
	die(int nSides_);

	int Roll();

	int nSides;

private:
};

#endif // !DIE_H
