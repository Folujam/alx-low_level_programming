#include <stdio.h>

/**
  *main - natural numbers
  *Return: 0
  */
int main(void)
{
	int a;
	int sum = 0;

	a = 0;
	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}

