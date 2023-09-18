#include "main.h"

/**
 *_strlen - entry point
 *@s: declared variable
 *Return: 0
 */
int _strlen(char *s)
{
	int t;

	for (t = 0; s[t] != '\0' && s[t] != '\n'; t++)
	{
		return (t);
	}
	return (0);

}
