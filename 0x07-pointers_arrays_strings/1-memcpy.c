#include "main.h"

/**
  **_memcpy - copies memory area
  *@dest: destination var
  *@src: source var
  *@n: declared variable
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (a < n && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
