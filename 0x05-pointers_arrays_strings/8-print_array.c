#include "main.h"
#include <stdio.h>

/**
 *print_array - prints "n" elements of an array
 *@a: declared variable
 *@n: declared variable
 *Return: 0
 */
void print_array(int *a, int n)
{
	int w = 0;

	for (w = 0; w < n; w++)
	{
		printf("array %d", a[w]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
