#include "main.h"

/**
  *print_alphabet_x10 - entry point
  *Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{

	char x;
	char t;

	for (x = 0; x <= 9; x++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
			_putchar('\n');
		}
	}

}
