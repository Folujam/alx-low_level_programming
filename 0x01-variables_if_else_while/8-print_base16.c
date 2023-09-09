#include <stdio.h>

/**
 * main- Entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n = '0';
	int a_to_f = 'a';

	while (n <= '9') /*would print 9-0*/
	{
		putchar(n);
		n++;
	}

	while (a_to_f <= 'f') /*would print a-f*/
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');
	
	return (0);
}
