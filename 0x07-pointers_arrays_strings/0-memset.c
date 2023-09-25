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
	while (n > 0)
	{
		s[n - 1] =(char)b;
		n--;
	}
	return (s);
}
