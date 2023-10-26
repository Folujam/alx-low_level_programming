#include "main.h"

/**
  *flip_bits - number of bits you would need to flip
  *@n: var
  *@m: var
  *Return: int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ctr;
	unsigned long int diff;

	diff = n ^ m;
	ctr = 0;
	while (diff != 0)
	{
		if ((diff & 1) == 1)
			ctr++;
		diff = diff >> 1;
	}
	return (ctr);
}
