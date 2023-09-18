#include "main.h"

/**
 *print_rev - prints from the end to the start
 *@s: declared variable
 *Return: 0
 */
void print_rev(char *s)
{
	int c, p;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	p = c - 1;
	while (p >= 0)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}
