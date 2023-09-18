#include "main.h"
#include <stdio.h>

/**
 *prints_array - prints "n" elements of an array
 *@a: declared variable
 *@n: declared variable
 *Return: 0
 */
void print_array(int *a, int n)
{

	while (*a < n)
	{
		printf("array %d", *a);
		_putchar(',');
		_putchar(' ');
		a++;
	}
	_putchar('\n');
}
