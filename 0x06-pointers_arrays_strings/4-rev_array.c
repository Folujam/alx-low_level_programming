#include "main.h"

/**
  *reverse_array - reverses array content
  *@a: declared variable
  *@n: declared variable
  *Return: void.
  */
void reverse_array(int *a, int n)
{
	int b = 0;
	int lenght = n - 1;/*length=number of elements(n) - null*/
	int temp;

	while (b <= (lenght / 2))
	{
		temp = a[b];/*temp is needed to store hanging element*/
		a[b] = a[lenght - 1 - b];
		a[lenght - 1 - b] = temp;
		b++;
	}
}
