#include "main.h"

/**
  *print_most_numbers - prints all but 2 and 4
  *Return: 0
  */
void print_most_numbers(void)
{
	for (q = 0; q <=9; q++)
	{
		if (q != 50 && q != 52)
		_putchar(q + '0');
	}
	_putchar('\n');
}
