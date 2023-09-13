#include "main.h"
/**
 *print_to_98 - entry point
 *@q: num to print
 *Return: always 0 (success)
 */
void print_to_98(int q)
{
	if (q <= 98)
	{
		for (q = 0; q <= 98; q++)
		{
			if (q == 98)
			{
				_putchar(q + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(q + '0');
			}
		}
	}
}
