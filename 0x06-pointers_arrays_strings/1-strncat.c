#include "main.h"

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
