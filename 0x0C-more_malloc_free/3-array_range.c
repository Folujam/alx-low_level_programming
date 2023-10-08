#include "main.h"
#include <stdlib.h>

/**
  **array_range - creates an array of integers
  *@min: int var
  *@max: int var
  *Return: pointer/null
  */
int *array_range(int min, int max)
{
	int *aR;
	int a;

	if (min > max)
	{
		return (0);
	}
	aR = malloc((max - min + 1) * sizeof(int));
	if (aR == 0)
	{
		return (0);
	}
	a = min;
	while (a <= max)
	{
		aR[a - min] = a;
		a++;
	}
	return (aR);
}
