#include <stdlib.h>
#include "main.h"

/**
  **_strdup - newly allocates space in mem, contains cpy of str
  *@str: pointer var
  *Return: pointer(success), null if str[null]
  */
char *_strdup(char *str)
{
	int i, j;/*indices*/
	char *newstr;/*new space*/

	if (str == 0)/*i null r null*/
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;/*strlen*/
	}
	newstr = malloc(i + 1 * sizeof(char));/*allocate memory*/
	if (newstr == 0) /*chk if null*/
	{
		return (0);
	}
	j = 0;
	while (j <= i)
	{
		newstr[j] = str[j];/*copy characters*/
		j++;
	}
	newstr[j] = '\0';/*add nullterm*/
	return (newstr);/*return pointer*/
}
