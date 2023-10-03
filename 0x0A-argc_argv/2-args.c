#include <stdio.h>

/**
  *main - prints all args passed
  *@argc: argument count
  *@argv: argument vector/pointer
  *Return: int (prints chars)
  */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
