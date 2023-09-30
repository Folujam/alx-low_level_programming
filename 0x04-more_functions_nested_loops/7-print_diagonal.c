#include "main.h"

/**
 *print_diagonal - slant to the right
 *@n: decleared variable
 *Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int u;

	if (n <= 0)
	_putchar('\n');

	for (i = 1 ; i <= n; i++)
	{
		for (u = 1; u <= (i - 1); u++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
