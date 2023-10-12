#include "function_pointers.h"

/**
  *array_iterator - executes a func given as a param on each elem of an array.
  *@array: pointer var
  *@size: var
  *@action: fp
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != 0 && size > 0)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
