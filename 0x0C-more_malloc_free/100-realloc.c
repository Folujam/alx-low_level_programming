#include "main.h"
#include <stdlib.h>

/**
  **_realloc - reallocates a memory block using malloc and free
  *@ptr: pointer var
  *@old_size: uint var
  *@new_size: uint var
  *Return: pointer/null
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *ptr2;
	unsigned int a;

	if (ptr == 0)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	if (new_size != old_size)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == 0)
			return (0);
		a = 0;
		while (a < new_size && a < old_size)
		{
			ptr2[a] = ((unsigned int *)ptr)[a];
			a++;
		}
		free(ptr);
	}
	return (ptr2);
}
