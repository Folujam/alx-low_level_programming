#include <stdio.h>

/**
  *main - fibonacci
  *Return: 0
  */
int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	int c;
	unsigned long int fib;

	c = 0;
	/*take note to set b4 counting to next iteration*/
	while (c < 50)
	{
		fib = a + b;
		if (c < 49)
			printf("%lu, ", fib);
		else
			printf("%lu", fib);
		a = b;/*set gotten to next*/
		b = fib;/*set gotten sum to b*/
		c++;
	}
	printf("\n");
	return (0);
}
