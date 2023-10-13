#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - function that prints strings
  *@separator: string
  *@n: number of args
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == 0)
		{
			printf("(nil)");
		}
		else
		{

			printf("%s", str);
		}
		if (i < n - 1 && separator != 0)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
