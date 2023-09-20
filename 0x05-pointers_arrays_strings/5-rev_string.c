#include "main.h"

/**
 *rev_string - entry from end point
 *@s: declared variable
 *Return: 0
 */
void rev_string(char *s)
{
	int d; /*index of element*/
	int f; /*count*/
	char z[500];/*blank*/
	int j = 0;

	d = 0;
	while (s[f])
	{
		f++;
		d++;
	}
	f = d - 1; /*lenght of string std*/
	while (d >= 0)
	{
		z[j] = s[f];
		j++;
		f--;
	}
	j = 0;
	while (f <= d - 1)
	{
		s[f] = z[j];
		j++;
		f++;
	}
}
