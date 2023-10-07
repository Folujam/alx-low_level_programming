#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints change
  *@argc: argument count
  *@argv: argument vector/pointer
  *Return: int
  */
int main(int argc, char **argv)
{
	int coins;
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	coins = 0;
	{
		coins += amount / 25;
		amount %= 25;
	}
	coins += amount / 10;
	{
		amount %= 10;
	}
	coins += amount / 5;
	{
		amount %= 5;
	}
	coins += amount / 2;
	{
		amount %= 2;
	}
	coins += amount / 1;/* equivalent to amount / 1 and amount %= 1*/
	printf("%d\n", coins);
	return (0);
}


