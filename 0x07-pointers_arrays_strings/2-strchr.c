#include "main.h"

/**
  **_strchr - locates character in a string
  *@s: pointer variable
  *@c: declared variable
  *Return: ptr(char exist), 0(empty)
  */
char *_strchr(char *s, char c)
{
	/*init counter*/
	int a = 0;

	/*loop to search through*/
	while (s[a] >= '\0')
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
		a++;
	}
	return (0);
}
