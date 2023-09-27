#include <stdio.h>

/**
  *main - natural numbers
  *Return: 0
  */
int main(void)
{
	int a;

	a = 0;
	while (a < 1024)
	{
		if (a % 3 == 0)
		{
			printf("%d\n", a);
		}
		else if (a % 5 == 0)
		{
			printf("%d\n", a);
		}
		else if (a % 15 == 0)
		{
			printf("%d\n", a);
		}
		a++;
	}
	return (a);
}

