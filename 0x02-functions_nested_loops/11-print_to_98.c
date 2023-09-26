#include "main.h"
/**
 *print_to_98 - entry point
 *@n: variable if under 98
 *@q: variable if over 98
 *Return: always 0 (success)
 */
void print_to_98(int n)
{
	int q;

	if (n <= 98)
	{
		for (n = 0; n <= 98; n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (q = n; q >= 98; q--)
		{
			_putchar((q / 10) + '0');
			_putchar((q % 10) + '0');

			 if (n != 98)
			 {
				_putchar(',');
				_putchar(' ');
			 }
		}
	}
}
