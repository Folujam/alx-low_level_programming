#include "main.h"

/**
  **malloc_checked -  allocates memory using malloc.
  *@b: unsighned int var
  *Return: pointer(success)/98(failure)
  */
void *malloc_checked(unsigned int b)
{
	unsigned int *mc;

	mc = malloc(sizeof(unsigned int) * b);
	if (mc == 0)
	{
		exit(98);
	}
	return (mc);
}
