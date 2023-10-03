#include <stdlib.h>
#include "main.h"

/**
  **create_array - creates an array of chars
  *@size: declared int var
  *@c: dclared char var
  *Return: a pointer
  */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *ptr;

	if (size == 0)/* chks if size null*/
	{
		return (0);
	}
	ptr = malloc(size * sizeof(char));/*call malloc, allocates mem 4 d array*/
	if (ptr == 0)
	{
		return (0);
	}
	index = 0;
	while (index < size)/*loop through d array*/
	{
		ptr[index] = c;/*in each itran, set curr elem to c(init 2 spef_char*/
		index++;
	}
	return (ptr);
}

