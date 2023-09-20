#include "main.h"

/**
 *puts2 - print every other character
 *@str: declared variable
 *Return: 0
 */
void puts2(char *str)
{
	int index = 0;
	int q =  index - 1;

	while (str[index] != '\0')
	{
		index++;
	}

	while (q != '\0')
	{
		if (index += 2)
		_putchar(str[q]);
		index++;
	}
	_putchar('\n');
}

