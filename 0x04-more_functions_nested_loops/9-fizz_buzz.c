#include <stdio.h>

/**
 *main - prints fizz-Buzz
 *Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	return (0);
}
