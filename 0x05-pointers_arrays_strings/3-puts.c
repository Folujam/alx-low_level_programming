#include "main.h"

/**
 *_puts - entry point
 *@str: declared variable
 *Return:0
 */
void _puts(char *str)
{
	char *str = NULL;
	int t = 0;

	while (str[t] != '\n' && str[t] != '\0')
	{
		_putchar(str[t]);
		t++;
	}
	_putchar('\n');
}
