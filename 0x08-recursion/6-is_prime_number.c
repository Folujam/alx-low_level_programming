#include "main.h"

/**
  *is_prime_number - identifies prime by return 1
  *@n: int var
  *Return: int
  */
int help(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (help(n, i + 1));
	}
}
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (help(n, 2));
}

