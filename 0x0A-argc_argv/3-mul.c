#include <stdio.h>
#include <stdlib.h>

/**
  *main - multiplies two integers
  *@argc: argument counter
  *@argv: argument vector/pointer
  *Return: int (multiplied result)
  */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc >= 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
