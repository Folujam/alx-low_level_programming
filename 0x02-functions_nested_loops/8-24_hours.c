#include "main"

/**
 *jack_bauer - entry point
 *@n: decleared variable
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
		for (i = 0; i <= 3; i++)
		{
			_putchar('u');
			_putchar('i');
			_putchar(':');
			{
				for (o = 0; o <= 5; o++)
				{
					for (p = 0; p <= 9; p++)
					{
						_putchar('o');
						_putchar('p');
					}
				}
			}
		}
	}
}
