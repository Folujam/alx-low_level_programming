#include "main.h"

/**
  **leet - encodes a string
  *@coda: declared variable
  *Return: coda
  */
char *leet(char *coda)
{
	int a;
	char loda[128];

	loda['A'] = loda['a'] = '4';/*mapping index to asciival of char and le*/
	loda['E'] = loda['e'] = '3';/*et equval*/
	loda['O'] = loda['o'] = '0';
	loda['T'] = loda['t'] = '7';
	loda['L'] = loda['l'] = '1';

	for (a = 0; coda[a] != '\0'; a++)
	{
		if ((coda[a] >= 'a' && coda[a] <= 'z') || (coda[a] >= 'A' && coda[a] <= 'Z'))
			coda[a] = loda[(unsigned char) coda[a]];
	}
	return (coda);
}
