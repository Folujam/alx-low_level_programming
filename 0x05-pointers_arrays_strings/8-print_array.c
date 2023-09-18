#include "main.h"

/**
 *prints_arrays - prints "n" elements of an array
 *@a: declared variable
 *@n: declared variable
 *Return: 0
 */
void print_array(int *a, int n);
{
	int w = 0;
	while (w <= n)
	{
		printf("array[%d], w" );
		if ( w != (n - 1))
			_putchar(",");
			_putchar(' ');
	}
	_putchar('\n');
}
