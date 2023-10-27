#include "main.h"

/**
  *print_binary - function that prints the binary representation of a number
  *@n: u long int var
  *Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	unsigned int i, shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	shift = 0;
	temp = n;
	while (temp > 0)
	{
		temp = temp >> 1;
		shift += 1;
	}
	for (i = shift - 1; i >= 0; i--)
	{
		if ((n & (1 << i)) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
