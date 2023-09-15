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

	for (i = 0; i <= n; i++)
	{
		for (u = 0; u <= n; u++)
		{
			if (i == u)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
