#include "main.h"

/**
  *_isdigit - finds "c" as digit
  *@c: decleared variable
  *Return: 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
