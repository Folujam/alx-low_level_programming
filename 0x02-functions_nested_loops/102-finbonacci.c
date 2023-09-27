#include <stdio.h>

/**
  *main - fibonacci
  *Return: 0
  */
int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int fib;

	c = 0;
	while (c < 50)
	{
		fib = a + b;
		printf("%d, ", fib);
		a = b;
		b = fib;
		c++;
	}
	printf("\n");
	return (0);
}
