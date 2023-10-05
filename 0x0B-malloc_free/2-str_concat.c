#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  **str_concat - cats 2 strings
  *strl - string lenght
  **_strcat - string cat
  *@s1: pointer variable
  *@s2: pointer variable
  *Return: pointer to new str
  */
char *str_concat(char *s1, char *s2)
{
	char *catstr = "";
	int a, b, l1, l2;

	if ((s1 == 0) && (s2 == 0))
	{
		return (catstr);
	}
	if (s1 == 0)
	{
		l2 = strl(s2);
		catstr = malloc(l2 * sizeof(char));
		strcpy(catstr, s2);
		return (catstr);
	}
	if (s2 == 0)
	{
		l1 = strl(s1);
		catstr = malloc(l1 * sizeof(char));
		strcpy(catstr, s1);
		return (catstr);
	}
	if ((s1 != 0) && (s2 != 0))
	{
		a = strl(s1);
		b = strl(s2);
		catstr = malloc((a + b + 1) * sizeof(char));/*alocte mem*/
		if (catstr != 0)/*if alocte success*/
		{
			for (a = 0; s1[a] != '\0'; a++)
			{
				catstr[a] = s1[a];/*copy s1 in2 catstr*/
			}
			 _strcat(catstr, s2);
		}
		else
			return (catstr);
	}
	return (catstr);
}
/**
  *strl - string lenght
  *@s: char var
  *Return: int
  */
int strl(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	return (0);
}
/**
  **_strcat - entry point
  *@dest: declared variable
  *@src: declared variable
  *Return: 0
  */
char *_strcat(char *dest, char *src)
{
	int a;
	int b; /*index of dest string*/
	int c;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		b++;
	}
	b++;
	c = 0;
	while (c < b)
	{
		dest[a + c] = src[c];
		c++;
	}
	dest[a + c] = '\0';
	return (dest);
}
