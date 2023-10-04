#include <stdlib.h>
#include "main.h"

/**
  **str_concat - cats 2 strings
  *@s1: pointer variable
  *@s2: pointer variable
  *Return: pointer to new str
  */
char *str_concat(char *s1, char *s2)
{
	char *catstr;
	int a, b, d;

	if ((s1 == 0) && (s2 == 0))
	{
		return (0);
	}
	if ((s1 != 0) && (s2 != 0))
	{
		a = 0;
		b = 0;
		while (s1[a] != '\0')
		{
			a++;
		}
		while (s2[b] != '\0')
		{
			b++;
		}
		catstr = malloc((a + b + 1) * sizeof(char));
		if (catstr == 0)
		{
			return (0);
		}
		for (a = 0; s1[a] != '\0'; a++)
		{
			catstr[a] = s1[a];
		}
		d = 0;
		while (d < b)
		{
			catstr[a + d] = s2[d];
			d++;
		}
		catstr[a + d] = '\0';
	}
	return (catstr);
}
