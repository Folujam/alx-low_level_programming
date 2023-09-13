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

	for (u = 48; u <= 2; u++)
	{
		for (i = 48; i <= 3; i++)
		{
			_putchar('u');
			_putchar('i');
			_putchar(':');
			{
				for (o = 48; o <= 5; o++)
				{
					for (p = 48; p <= 9; p++)
					{
						_putchar('o');
						_putchar('p');
					}
				}
			}
		}
	}
}
