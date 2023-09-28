#include "main.h"

/**
  *_sqrt_recursion_help - help function
  *_sqrt_recursion - returns natural sqrt of a given num
  *@n: int var
  *@e: guess
  *Return: int
  */
/*intro a helper function*/
int _sqrt_recursion_help(int n, int e) /*intro var e, modif 2arg*/
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
/**
  *_sqrt_recursion - finds n sqrt
  *_sqrt_recursion_help - takes two parameters
  *@n: int var
  *Return: int
  */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_help(n, 0)); /*starts with a guess number of 0*/
}
