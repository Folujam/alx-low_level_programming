#include "main.h"

/**
 *rev_string - entry from end point
 *@s: declared variable
 *Return: 0
 */
void rev_string(char *s)
{
	int d; /*count*/
	int f; /*index of element*/
	char z;/*blank*/

	d = 0;
	while (s[f])
	{
		f++;
		d++;
	}
	f = d - 1; /*lenght of string std*/
	while (f  >= (d / 2))
	{
		z = s[f];
		s[f] = s[d - f - 1];
		s[d - f - 1] = z;
		f++;
	}
}
