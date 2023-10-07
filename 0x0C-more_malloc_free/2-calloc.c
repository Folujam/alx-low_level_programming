#include "main.h"
#include <stdlib.h>

/**
  **_calloc - allocates memory for an array
  *@nmemb: int var
  *@size: int var
  *Return: pointer/Null
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *_calloc;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	_calloc = malloc(nmemb * size);
	if (_calloc == 0)
	{
		return (0);
	}
	a = 0;/*memset function*/
	while (a < nmemb * size)
	{
		_calloc[a] = 0;
		a++;
	}
	return (_calloc);
}
