#include "main.h"

/**
 *print_line - print underscore combo
 *@n: decleared  variable
 *Return: 0
 */
void print_line(int n)
{
	int m;

	for (m = 0; m <= n; m++)
	{
		_putchar('_');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

