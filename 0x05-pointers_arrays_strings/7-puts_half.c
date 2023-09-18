#include "main.h"

/**
 *puts_half - entry to prints half a string
 *@*str: declared variable
 *Return: 0
 */
void puts_half(chsr *str)
{
	int g, n;

	g = 0;
	while (str[g] != '\0')
	{
		g++;
	}
	n = (g - 1) / 2;
	for (f = 0; f < n; f++)
	{
		first[f] = str[f];
		first[n] = '\0';
	}
	for (f = n; f <= g; f++)
	{
		sec[f - n] = str[f];
	}
}
