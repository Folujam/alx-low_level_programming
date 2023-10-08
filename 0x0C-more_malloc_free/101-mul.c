#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
  *main - multiplies two positive numbers.
  *is_number - validates if a string is a number
  *Return: int
  */
int main(int argc, char **argv)
{
	int mul, num1, num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (num1 >= 0 && num2 >= 0)
	{
		mul = 0;
		mul = num1 * num2;
		_putchar(mul + '0');
		_putchar('\n');
	}
	return (0);
}
/**
  *is_number - validates if a string is a number
  *@str: string pointer var
  *Return: 1-false/0-true
  */
int is_number(char *str)
{
	int a;
	for (a = 0; str[a] != '\0'; a++)
	{
		if (!isdigit(str[a]) && str[a] >= 0)
		{
			return (1);
		}
	}
	return (0);
}

