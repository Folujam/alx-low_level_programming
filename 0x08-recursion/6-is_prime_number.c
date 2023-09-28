#include "main.h"

/**
  *help - helps intro i to sqrt
  *is_prime_number - identifies prime by return 1
  *@n: int var
  *@i: int var
  *Return: int prime numbers
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
/**
  *is_prime_number - gets prime
  *help - finds prime
  *@n: int var
  *Return: int prime
  */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (help(n, 2));
}

