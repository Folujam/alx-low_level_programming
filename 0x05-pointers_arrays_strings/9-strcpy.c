#include "main.h"

/**
 **_strcpy -sting copy
 *@dest: declared variable
 *@src: declared variable
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	while (*src == '\0')
	{
		*dest = *src;
		return (dest);
		src++;
		dest++;
	}
	*src = '\0';
	return (dest);
}

