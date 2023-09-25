#include "main.h"

/**
  *_strspn - length of a prefix substring
  *@s: pointer var
  *@accept: accepting prefix
  *Return: seg(s)
  */
unsigned int _strspn(char *s, char *accept)
{
	/*declare indicies and set counter to 0*/
	int a;
	int b;
	int c = 0;

	/*for each char c in s*/
	for (a = 0; s[a] != '\0'; a++)
	{
		int seen = 0;/*set found to false*/
		/*for each char b in accept*/
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				seen = 1;/*set found to false*/
				break;
			}
		}
		if (seen)/*if found/seen true, increament counter(c)*/
		{
			c++;
		}
		else
		{
			break;
		}
	}
	return (c);/*return counter*/
}
