#include "main.h"

/**
  *strng_toupper - entry point
  *@ups: declared variable
  *Return: ups
  */
char strng_toupper(char ups)
{
	if (ups >= 'a' && ups <= 'z')
	{
		ups = ups - 32;
	}
	return (ups);
}
/**
 **cap_string - caps each word
 *@capa: declared variable
 *Return: capa
 */
char *cap_string(char *capa)
{
	int a;

	for (a = 0; capa[a] != '\0'; a++)
	{
		if (a == 0 || capa[a - 1] == ' ' || capa[a - 1] == '\t' || c\
			apa[a - 1] == '\n')
		{
			capa[a] = strng_toupper(capa[a]);
		}
	}
	return (capa);
}
