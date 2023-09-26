#include "main.h"

/**
  **_strstr - locates a substring
  *@haystack: variable to be searched
  *@needle: sorting variable
  *Return: needle/null
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b;
	int match = 0;

	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b] != '\0')
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			match = 1;
		}
		if (match == 1)
		{
			return haystack + a;
		}
		a++;
	}
	return(0);
}
