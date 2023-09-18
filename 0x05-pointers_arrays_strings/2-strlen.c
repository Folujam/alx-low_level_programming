#include "main.h"

/**
 *_strlen - entry point
 *@s: declared variable
 *Return: 0
 */
int _strlen(char *s)
{
	int t = 0;

	while (*s != '\0')
	{
		s++;
		t++;
	}
	return (t);
}
