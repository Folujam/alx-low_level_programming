#include "main.h"

/**
 *jack_bauer - entry point
 *
 *Return: always 0 success
 */
void jack_bauer(void)
{
	int u;
	int i;
	int o;
	int p;

	for (u = 0; u <= 2; u++)
	{
		for (i = 0; i <= 9; i++)
		{
			if ((u <= 1 && i <= 9) || (u <= 2 && i <= 3))
			{
				for (o = 0; o <= 5; o++)
				{
					for (p = 0; p <= 9; p++)
					{
						_putchar(u + '0');
						_putchar(i + '0');
						_putchar(':');
						_putchar(o + '0');
						_putchar(p + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
