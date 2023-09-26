#include "main.h"

/**
  *print_chessboard - prints a chessboard
  *@a: declared array
  *Return: 0
  */
void print_chessboard(char (*a)[8])
{
	int o,i;

	o = 0;
	while (o < 8)
	{
		i = 0;
		while (i <= 7)
		{
			_putchar(a[o][i]);
		i++;
		}
		o++;
		_putchar('\n');
	}
}

