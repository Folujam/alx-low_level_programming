#include "main.h"

/**
 *swap_int - switch number values
 *@*a: delceared pointer
 *@*b: declared pointer
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
