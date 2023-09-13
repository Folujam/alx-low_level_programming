#include "main.h"

/**
 *jack_bauer - entry point
 *
 *Return: always 0 success
 */
void jack_bauer(void)
{
	int u = 0
	int i = 0
	int o = 0
	int p = 0

	for (u <= 2; u++)
	{
		for (i <= 9; i++)
		{
			if ((u <= 1 && i <= 9) || (u <= 2 && i <= 3))
			{
				for (o <= 5; o++)
				{
					for (p <= 9; p++)
					{
						_putchar('u');
						_putchar('i');
						_putchar(':');
						_putchar('o');
						_putchar('p');
						_putchar('\n');
					}
				}
			}
		}
	}
}
