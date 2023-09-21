#include "main.h"

/**
  **string_toupper - entry point
  *Return: lowercase char
  */
char *string_toupper(char *ups)
{
	int d;

	for (d = 0; ups[d] != '\0'; d++)
	{
		if (ups[d] >= 97 && ups[d] <= 122 )
		{
			ups[d] = ups[d] - 32;
		}
	}
	return (ups);
}

