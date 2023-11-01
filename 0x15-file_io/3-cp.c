#include "main.h"

/**
  *main - program copies content from 1 file 2 anoda
  *@argc: count of argument passed
  *@argv: vector/pointer to the passed args
  *Return: int
  */
int main(int argc, char **argv)
{
	FILE *a2;
	const char *file_from = argv[1], *file_to = argv[2];
	char racter[1024];/*buffer to hold 1024 chars at a r&w*/
	size_t a, b; /*a = amount read, b = amount wrttn*/
	int a3;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	a2 = fopen(file_from, "r");
	if (a2 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a3 = open(file_to, O_CREAT | O_WRONLY, 0664);
	if (a3 != -1)
	{
		while ((a = fread(racter, sizeof(char), 1024, a2)) > 0)
		{
			b = write(a3, racter, sizeof(char) * a);
			if (a > b)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	}
	fclose(a2);
	close(a3);
	if (close(a3) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a3);
		exit(100);
	}
	return (b);
}
