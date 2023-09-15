#include "main.h"

/**
  *more_numbers - print 0 to 14, x10
  *Return: 0
  */
void more_numbers(void)
{
	int l;
	int h;

	for (l = 0; l <= 9; l++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h > 9)
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
		}
		_putchar('\n');
	}
}

