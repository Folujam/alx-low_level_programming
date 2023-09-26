#include "main.h"
#include <stdio.h>

/**
  *print_diagsums - numbers diagonal
  *@a: declared ptr
  *@size: declared var
  *Return: void
  */
void print_diagsums(int *a, int size)
{
	/*from example there are two sums for each*/
	/*initialize both sums*/
	int sum1 = 0;
	int sum2 = 0;

	int i = 0;

	while (i <= (size - 1))
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}

