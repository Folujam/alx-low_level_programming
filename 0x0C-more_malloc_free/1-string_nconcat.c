#include "main.h"
#include <stdlib.h>

/**
  **string_nconcat -  concatenates two strings.
  *_strncat - contcatenates two strings with and integer
  *_strlen - string lenght
  *@s1: pointer var to string 1(destination)
  *@s2: pointer var to string 2(source)
  *@n: int var at which concat should terminate
  *Return: pointer/null
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, cp, lenb;
	char *concstr;

	if (*s1 == 0)
		s1 = "";
	if (*s2 == 0)
		s2 = "";
	a = _strlen(s1);
	b = 0;
	lenb = 0;
	while (b < n && s2[b] != '\0')
	{
		lenb += 1;
		b++;
	}
	if (n >= lenb)
		n = lenb;
	concstr = malloc(a + n + 1 * sizeof(char));
	if (concstr == 0)
	{
		return (0);
	}
	cp = 0;
	while (s1[cp] != '\0')
	{
		concstr[cp] = s1[cp];
		cp++;
	}
	_strncat(concstr, s2, n);
	return (concstr);
}
/**
  *_strlen - entry point
  *@s: declared variable
  *Return: 0
  */
unsigned int _strlen(char *s)
{
	int t = 0;

	while (*s != '\0')
	{
		s++;
		t++;
	}
	return (t);
}
/**
 **_strncat - contcatenates two strings with and integer
 *@dest: declared pointer variable
 *@src: declared pointer variable
 *@n: decalred variable
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, c; /*a=destindex,b=srcindex,c=combined lenght*/

	a = 0;
	while (dest[a] != '\0')
	{
		a++; /*determines length of 1st str*/
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		b++; /*determines 2nd str lenght till n*/
	}
	c = 0;
	while (c < n && src[c] != '\0') /*note: if c<=n, it prints extra xter*/
	{
		dest[a + c] = src[c];/*appends src to dest*/
		c++;
	}
	dest[a + c] = '\0';/*stops concatenating if n is not present*/
	return (dest);
}

