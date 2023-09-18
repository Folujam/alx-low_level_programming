#include "main.h"

/**
 *rev_string - entry from end point
 *@s: declared variable
 *Return: 0
 */
void rev_string(char *s)
{
	int d; /*count*/
	int f;
	int ind1 = 0; /*index 1*/
	int ind2; /*index 2*/
	char z;

	d = 0;
	while (*s != '\0')
	{
		s++;
		d++;
	}
	f = d - 1; /*lenght of string std*/
	while (ind1 < (f / 2) + 1)
	{
		ind2 = (d - ind1);
		z = s[ind1];
		s[ind1] = s[ind2];
		s[ind2] = z;
		f++;
	}
}
