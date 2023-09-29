#include "main.h"

/**
  *dromehelp - intro two xtra var to check head and tail
  *strl - checks string content
  *is_palindrome - checks if string reads same back and forward
  *@s: pointer var
  *@head: initial char index
  *@tail: last char index
  *Return: 1 if pali, 0 if not
  */
int dromehelp(char *s, int head, int tail)
{
	/*checks chars from both ends towards centre*/
	if (head >= tail)
	{
		return (1);
	}
	if (s[head] != s[tail])
	{
		return (0);
	}
	return (dromehelp(s, head + 1, tail - 1));
}
/**
  *strl - finds the string lenght
  *@s: pointer var for string
  *Return: 1 if string exist, 0 if empty
  */
int strl(char *s)
{
	/*cal lenght of a string*/
	if (s[0] == '\0')
	{
		return (0);
	}
	return (1 + strl(s + 1));
}
/**
 *is_palindrome - checks if string is a pali
 *@s: pointer var to string
 *Return: 1 if pali, 0 if not
 */
int is_palindrome(char *s)
{
	/*use both above func to determine if the string is pal*/
	int lenght = strl(s);

	if (lenght == 0)
	{
		return (1);
	}
	return (dromehelp(s, 0, lenght - 1));
}
