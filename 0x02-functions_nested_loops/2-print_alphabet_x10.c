#include "main.h"

/**
  *print_alphabet_x10 - entry point
  *Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	putchar('\n');
}
/*lets print x10 acc jenny*/
void print_alpabet_x10(void)
{
	int x;

	for(x = 0; x <= '10'; x++)
	{
		print_alphabet();
	}
}
