#include "main.h"

/**
 *rev_string - entry from end point
 *@s: declared variable
 *Return: 0
 */
void rev_string(char *s)
{
	int d; /*index of element*/
	int f = 0; /*count*/
	char z[1000];/*blank*/
	int j = 0;

	d = 0;
	while (s[f])
	{
		f++;
		d++;
	}
	f = d - 1; /*lenght of string std*/
	while (d > 0)
	{
		z[j] = s[d - 1];
		j++;
		f--;
	}
	j = 0;
	f = 0;
	while (f <=  d - 1)
	{
		s[f] = z[j];
		j++;
		f++;
	}
}
