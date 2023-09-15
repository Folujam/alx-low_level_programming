#include <stdio.h>

/**
 *main - prints fizz-Buzz
 *Return: 0
 */
int main(void)
{
	int a;
	int FizzBuzz;
	int Fizz;
	int Buzz;

	for (a = 1; a <= 100; a++)
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("%d ", FizzBuzz);
		}
		else if (a % 5 == 0)
		{
			printf("%d ", Buzz);
		}
		else if (a % 3 == 0)
		{
			printf("%d ", Fizz);
		}
		else
		{
			printf("%d ", a);
		}
}
