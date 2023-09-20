#include "main.h"

/**
 *puts_half - entry to prints half a string
 *@str: declared variable
 *Return: 0
 */
void puts_half(char *str)
{
	int g, n;
	int f;
	char sec[500];

	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}
	f = 0;
	for (n = (g - 1) / 2; n <= g; n++)
	{
		sec[f] = str[n];
		_putchar(sec[f]);
	}
	sec[g] = '\0';
}
