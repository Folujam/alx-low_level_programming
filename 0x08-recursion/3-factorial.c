#include "main.h"

/**
  *factorial - returns fact of a given num
  *@n: int var
  *Return: int
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
