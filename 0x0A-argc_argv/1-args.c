#include <stdio.h>

/**
  *main - prints number of args passed
  *@argc: argument count
  *@argv: argument pointer/vector
  *Return: int
  */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
