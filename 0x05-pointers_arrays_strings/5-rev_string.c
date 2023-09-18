#include "main.h"

/**
 *rev_string - entry from end point
 *@s: declared variable
 *Return: 0
 */
void rev_string(char *s)
{
	int d, f;

	d = 0;
	while (*s != '\0')
	{
		_putchar(*s);
		d++;
	}
	f = d - 1;
	while (f >= 0)
	{
		_putchar(*s);
		f--;
	}
	_putchar('\n');
}
