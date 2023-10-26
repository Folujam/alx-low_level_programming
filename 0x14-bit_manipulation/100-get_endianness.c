#include "main.h"

/**
  *get_endianness - function that checks the endianness
  *Return: int(1 = little end, 0 = big end)
  */
int get_endianness(void)
{
	int a = 1;
	char *b = (char *)&a;

	if (*b == 1)
		return (1);
	else
		return (0);
}
