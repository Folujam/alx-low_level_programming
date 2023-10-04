#include "main.h"

/**
 **_strcpy -sting copy
 *@dest: declared variable
 *@src: declared variable
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;/*this is to hold addy of first char, so as to point to*/
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';/*dest now stored up to nulltrm addy*/
	return (temp);/*hence, temp held first char addy & r it &begin it*/
}

