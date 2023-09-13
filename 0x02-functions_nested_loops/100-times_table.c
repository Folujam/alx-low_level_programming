#include "main.h"

/**
 *print_times_table - entry point
 *@n: decleared variable
 *
 *Return: always 0 success
 */
void print_times_table(int n)
{
	int q;
	int wxw;
	int promax;

	if (n >= 0 && n <= 15)//range in which to print
	{
		for (q = 0; q <= n; q++)//numba-q starts from 0 and ends at 'n'
		{
			_putchar('0');//prints numba
			for (wxw = 1; wxw <= n; wxw++)//multiplicable numba
			{
				_putchar(',');
				_putchar(' ');
				promax = q * wxw;//find result: numba by multiplier
				if (promax <= 99)//double spacer
					_putchar(' ');
				if (promax <= 9)
					_putchar(' ');
				if (promax >= 100)//i'm still thinking here, wow!
				{
					_putchar((promax / 100) + '0');
					_putchar(((promax / 10) % 10) + '0');//double numbas
				}
				else if (promax <= 99 && promax >= 10)
				{
					_putchar((promax / 10) + '0');
				}
					_putchar((promax % 10) + '0');//3ple numbas
			}
			_putchar('\n');
		}
	}
}

