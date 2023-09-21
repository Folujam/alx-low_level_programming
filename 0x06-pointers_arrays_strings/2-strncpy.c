#include "main.h"

/**
  **_strncpy - copies string src into dest
  *@dest: declared pointer variable
  *@src: declared pointer variable
  *@n: declared variable
  *Return:
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b; /*a=lenght of strings, b=copy count*/

	a = 0;
	b = 0;
	while (a < n)
	{
		if (src[b] != '\0')
		{
			dest[a] = src[b];
			a++;
			b++;
		}
		else
		{
			dest[a] = '\0';
			a++;
		}
	}
	return (dest);
}
