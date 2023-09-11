#include <stdio.h>

/**
  *main- Entry point
  *Return: Always 0 (Success)
  */

int main(void)
{
	int a;
	int b;
	int r;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for(r = a + 2; r <= 9; r++)/*each 'for' is for each(3) num-char*/
			{
				putchar(a + '0');/*'0' calls ascii*/
				putchar(b + '0');
				putchar(r + '0');
				if (a != 7 || b != 8 || r != 9)/*this would be the last number*/
				{
					putchar(','); /*if its not the last number, put both these chars*/
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
