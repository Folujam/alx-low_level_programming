#include "main.h"

/**
 *times_table - entry point
 *Return: always 0 success
 */
void times_table(void)
{
	int hori;
	int vert;
	int of;
	int s;
	int d;

	for (hori = 0; hori <= 9; hori++)
	{
		for (vert = 0; vert <= 9; vert++)
		{
			of = vert * hori;
			s = of % 10;
			d = of / 10;
			if (vert == 0)
			{
				_putchar('0');
			}
			else if (of <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(s + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(s + '0');
			}
		}
		_putchar('\n');
	}
}
