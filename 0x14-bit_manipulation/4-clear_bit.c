#include "main.h"

/**
  *clear_bit - function that sets the value of a bit to 0 at a given index
  *@n: var
  *@index: var
  *Return: int
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;/*var is used 2 clr a bit at a specific i in e num n*/

	if (index > sizeof(*n) * 8)
		return (-1);
	mask = ~(1 << index);
	*n = *n & mask;
	return (1);
}
