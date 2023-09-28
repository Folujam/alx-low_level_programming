#include "main.h"

/**
  *_sqrt_recursion - returns natural sqrt of a given num
  *@n: int var
  *Return: int
  */
/*intro a helper function*/
int _sqrt_recursion_help(int n, int e) /*intro guess var e, modif to take 2arg*/
{
	if (e * e == n)/*guess base case*/
	{
		return (e);
	}
	else if ((e * e) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_help(n, e + 1));/*passes 2 argument as modif*/
	}
}
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_help(n, 0)); /*starts with a guess number of 0*/
}
