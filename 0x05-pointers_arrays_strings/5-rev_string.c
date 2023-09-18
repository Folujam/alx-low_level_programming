#include "main.h"

/**
 *rev_string - entry from end point
 *@s: declared variable
 *Return: 0
 */
void rev_string(char *s)
{
	int d;
	int f;
	int

	d = 0;
	while (*s != '\0')
	{
		s++;
		d++;
	}
	f = d - 1;
	g = 0
	while (f >= 0)
	{
		_putchar(s[d]);
		f--;
	}
	_putchar('\n');
}
