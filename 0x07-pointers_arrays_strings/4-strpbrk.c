#include "main.h"

/**
  **_strpbrk - search string
  *@s: pointer variable
  *@accept: declared variable
  *Return: s/null
  */
char *_strpbrk(char *s, char *accept)
{
	/*declaration of variables and set counter to 0*/
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
			b++;
		}
		a++;
	}
	return (0);
}
