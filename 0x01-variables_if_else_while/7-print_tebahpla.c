#include <stdio.h>

/**
 * main- Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';/*counts backword*/

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
