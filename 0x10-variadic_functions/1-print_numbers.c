#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers -  function that prints numbers
  *@separator: pointer var
  *@n: int var
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != 0)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
