#include "main.h"

/**
  *void print_alphabet(void)- entry point
  *Return: Always 0 (Success)
  */

void print_alphabet(void) /*local function for alphabets*/
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
