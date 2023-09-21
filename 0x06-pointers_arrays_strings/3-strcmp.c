#include "main.h"

/**
  *_strcmp - compares two strings
  *@s1: string 1
  *@s2: string 2
  *Return: 0 success
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && s2[b] != '\0') /*checks for lenght*/
	{
		if (s1[a] != s2[b])/*checks for difference*/
		{
			return (s1[a] - s2[b]);/*assertains difference*/
		}
		a++;
		b++;
	}
	return (s1[a] - s2[b]);
}
