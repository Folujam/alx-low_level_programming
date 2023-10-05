#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  **argstostr - concatenates all the argument
  *@ac: int var
  *@av: pointer var
  *Return: char/null
  */
char *argstostr(int ac, char **av)
{
	int totlen, a, b, index;
	char *newstr;

	if ((ac == 0) || (av == 0))
		return (0);
	totlen = 0;
	for (a = 0; a < ac; a++)
	{
		totlen += strlen(av[a]) + 1;
	}
	totlen += 1;
	newstr = malloc(totlen * sizeof(char));
	if (newstr == 0)
		return (0);
	index = 0;
	for (b = 0; b < ac; b++)
	{
		strcpy(&newstr[index], av[b]);
		index += strlen(av[b]);
		newstr[index] = '\n';
		index++;
	}
	newstr[index] = '\0';
	return (newstr);
}
