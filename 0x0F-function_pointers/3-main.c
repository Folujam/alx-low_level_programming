#include "3-calc.h"

/**
  *main - main
  *@argc: has to b 3
  *@argv: vector/pointer
  *Return: int
  */
int main(int argc, char **argv)
{
	int num1, num2, result, (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	f = get_op_func(argv[3]);
	if (f == 0)
	{
		printf("Error\n");
		exit (98);
	}
	else
	{
		result = (*f)(num1, num2);
		printf("%d", result);
	}
	return (0);
}
