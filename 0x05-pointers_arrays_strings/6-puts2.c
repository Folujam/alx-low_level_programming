#include "main.h"

/**
 *puts2 - print every other character
 *@str: declared variable
 *Return: 0
 */
void puts2(char *str)
{
	int index = 0;
	int q = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	while (q != index)
	{
		_putchar(str[q]);
		index+= 2;
	}
	_putchar('\n');
}

