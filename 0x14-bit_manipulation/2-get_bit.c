#include "main.h"

/**
  *get_bit -  function that returns the value of a bit at a given index
  *@n: var
  *@index: var
  *Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)/*chk if i within validrange uint*/
		return (-1);
	return ((n >> index) & 1);
}
