#include "main.h"

/**
  **_memset - sets mem
  *@s: pointer char variable
  *@b: char variable
  *@n: int variable
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] =b;
		a++;
	}
	return (s);
}
