#include "main.h"

/**
  **_strcat - entry point
  *@dest: declared variable
  *@src: declared variable
  *Return: 0
  */
char *_strcat(char *dest, char *src)
{
	int a, b; /*indices for both strings*/

	for (a = 0; dest[a] < '\0'; a++)
	{
		_putchar(dest[a]); /*runs through dest string and prints index*/
	}
	b = 0;
	while (src[b] <= '\0')
	{
		_putchar(src[b]);/*runs through src string and prints*/
	}
	return (char *)dest;
}
