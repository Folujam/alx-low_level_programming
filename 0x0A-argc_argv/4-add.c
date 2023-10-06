#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
  *main - adds positive ints
  *@argc: argument counter
  *@argv: argument vector/pointer
  *Return: int
  */
int main(int argc, char **argv)
{
	int a, b, len, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			len = strlen(argv[a]);
			for (b = 0; b < len; b++)
			{
				if (!isdigit(argv[a][b]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
