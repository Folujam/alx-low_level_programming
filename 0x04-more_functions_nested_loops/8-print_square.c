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
	for (q = 1; q <= size; ++q)
	{
		for (b = 1; b <= size; ++b)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}



