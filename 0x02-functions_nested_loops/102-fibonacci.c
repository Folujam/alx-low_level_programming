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
	while (c < 50)
	{
		fib = a + b;
		printf("%lu, ", fib);
		a = b;
		b = fib;
		c++;
	}
	printf("\n");
	return (0);
}
