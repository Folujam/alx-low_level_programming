#include "main.h"

/**
 *print_square - square print ixi
 *@size: decleared variable
 *Return: 0
 */
void print_square(int size)
{
	int q;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (q = 0; q <= size; q++)
	{
		_putchar('#');
		for (b = 0; b <= size; b++)
		{
			_putchar('\n');
			_putchar('#');
		}
	}
	_putchar('\n');
}



