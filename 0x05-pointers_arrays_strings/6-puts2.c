#include "main.h"

/**
 *puts2 - print every other character
 *@str: declared variable
 *Return: 0
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (index != '\n' && index != '\0')
	{
		_putchar(str[index]);
		index+= 2;
	}
	_putchar('\n');
}

