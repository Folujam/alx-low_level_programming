#include "main.h"

/**
  **_strcat - entry point
  *@dest: declared variable
  *@src: declared variable
  *Return: 0
  */
char *_strcat(char *dest, char *src)
{
	int a;
	int b; /*index of dest string*/
	int c;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		b++;
	}
	b++;
	c = 0;
	while (c < b)
	{
		dest[a + c] = src[c];
		c++;
	}
	dest[a + c] = '\0';
	return (dest);
}
