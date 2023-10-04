#include "main.h"

/**
 **_strcpy -sting copy
 *@dest: declared variable
 *@src: declared variable
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (temp);
}

