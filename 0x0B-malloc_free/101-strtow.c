#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  ***strtow - splits a string into words
  *count_words - count words
  *@str: pointer var
  *Return: char/null
  */
char **strtow(char *str)
{
	int wc, a, i, len;
	char **w_arr, *start, *end;

	if ((str == 0) || strcmp(str, "") == 0)
	{
		return (0);
	}
	wc = count_words(str);
	w_arr = malloc(wc * sizeof(char *) + 1);
	if (w_arr == 0)
	{
		return (0);
	}
	a = 0;
	start = str;
	while (a < wc)
	{
		while (*start == ' ')
			start++;
		end = start;
		while (*end != '\0' && *end != ' ')
			end++;
		len = end - start;
		w_arr[a] = malloc((len + 1) * sizeof(char));
		if (w_arr[a] == 0)
		{
			for (i = 0; i < a; i++)
				free(w_arr[i]);
			free(w_arr);
			return (0);
		}
		strncpy(w_arr[a], start, len);
		w_arr[a][len] = '\0';
		start = end;
		a++;
	}
	w_arr[wc] = 0;
	return (w_arr);
}
/**
  *count_words - counts words
  *@str: pointer var
  *Return: count+1
  */
int count_words(char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			count++;
		}
	}
	return (count + 1);
}
