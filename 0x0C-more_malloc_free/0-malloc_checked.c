#include "main.h"

/**
  **malloc_checked -  allocates memory using malloc.
  *@b: unsighned int var
  *Return: pointer(success)/98(failure)
  */
void *malloc_checked(unsigned int b)
{
	int *mc;

	mc = malloc(b);
	if (mc == 0)
	{
		exit(98);
	}
	return (mc);
}
