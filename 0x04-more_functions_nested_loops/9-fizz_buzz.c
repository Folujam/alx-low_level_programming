#include <stdio.h>

/**
 *main - prints fizz-Buzz
 *Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
		/*multiples of both 3&5*/
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		/*multiples of 5*/
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		/*multiples of 3*/
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		/*all other numbers*/
		else
		{
			printf("%d ", a);
		}
	return (0);
}
