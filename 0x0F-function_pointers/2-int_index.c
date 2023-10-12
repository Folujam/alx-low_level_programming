#include "function_pointers.h"

/**
  *int_index - searches for an integer
  *@array: pointer var
  *@size: int var
  *@cmp: fp
  *Return: integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != 0 && cmp != 0)
	{
		a = 0;
		while (a < size)
		{
			if (cmp(array[a]) != 0)
			return (a);
			a++;
		}
		return (-1);
	}
	return (-1);
}
