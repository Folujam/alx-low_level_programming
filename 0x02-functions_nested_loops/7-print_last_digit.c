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
		t = t * -1;
	}
		_putchar(t + '0');
		return (t);
}


