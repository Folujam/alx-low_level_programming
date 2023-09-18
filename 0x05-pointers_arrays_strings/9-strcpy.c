#include "main"

/**
 **_strcpy -sting copy
 *@dest: declared variable
 *@src: declared variable
 *Return: 0
 */
char *_strcpy(char *dest, char *scr)
{
	while (*scr == '\0')
	{
		*dest = *scr;
		scr++;
		dest++;
		return (dest);
	}
}

