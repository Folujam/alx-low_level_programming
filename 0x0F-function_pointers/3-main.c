#include "3-calc.h"
#include <stdlib.h>

/**
  *main - main
  *@argc: has to b 3
  *@argv: vector/pointer
  *Return: int
  */
int main(argc, **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	num1 = atoi(argv[1]);
	num2 = aroi(argv[2]);
	(*fp)(int) = get_op_func(num1);
	if (fp == 0)
	{
		printf("Error\n");
		exit (98);
	}/*incomplete code, cant think anm-rn :|*/
	return (0);
}
