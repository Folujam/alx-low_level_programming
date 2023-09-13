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
	if (t <= 9)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('1');
		return (1);
	}
}


