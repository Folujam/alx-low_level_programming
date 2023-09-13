#include "main.h"

/**
 *print_last_digit - entry point
 *@c: decleared variable
 *Return: only last num
 */
int print_last_digit(int c)
{
	int t;

	t = c % 10;
	if (t < 0)
	{
		_putchar(-1 + '0');
		return (-1);
	}
	else
	{
		_putchar(1 + '0');
		return (1);
	}
	return (0);
}


