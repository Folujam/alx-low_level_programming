#include "main.h"

/**
 *print_triangle - prints a right sided 90degree triangle
 *@size: decleared variable
 *Return: 0 success
 */
void print_triangle(int size)
{
	int ro;
	int co;

	if (size <= 0)
		_putchar('\n');
	for (ro = 1; ro <= size; ro++)
	{
		for (co = size; co >= 1; co--)
		{
			if (ro >= co)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
