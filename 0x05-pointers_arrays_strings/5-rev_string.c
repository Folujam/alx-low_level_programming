#include "main.h"

/**
 *rev_string - entry from end point
 *@*s: declared variable
 *Return: 0
 */
void rev_string(char *s)
{
	char s[];
	int d, f;

	d = 0;
	while (s[d] != '\0')
	{
		_putchar(s[d]);
		d++;
	}
	f = d - 1;
	while (f >= 0)
	{
		_putchar(s[f]);
		f--;
	}
}
