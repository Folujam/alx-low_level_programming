#include "main.h"

/**
  *binary_to_uint -  function that converts a binary number to an unsigned int
  *@b: passed string
  *Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int i, len;

	if (b == NULL)
		return (0);
	sum = 0;
	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += 1 << (len - 1 - i);
		else if (b[i] != '0')
			return (0);
	}
	return (sum);
}

