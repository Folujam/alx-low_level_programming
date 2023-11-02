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
	char acter[1024];/*buffer to hold 1024 chars at a r&w*/
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
		while (1)
		{
			a = rdntst_a2(acter, a2, argv[1]);
			b = write(a3, acter, sizeof(char) * a);
			ab(a, b, argv[2]);
		}
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	fclose(a2);
	if (close(a3) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a3);
		exit(100);
	}
	return (0);
}
/**
  *rdntst_a2 - test and treats a2 fd while reading it
  *@acter: pointer to buffer
  *@a2: open file
  *Return: long int size_t
  */
size_t rdntst_a2(char *acter, FILE *a2, char **argv)
{
	size_t a;

	a = fread(acter, sizeof(char), 1024, a2);
	if (a < 1024)
	{
		if (feof(a2))
			break;
		if (ferror(a2))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", b);
			exit(98);
		}
	}
	return (a);
}
/**
  *ab - test 2 para
  *@a: para 1
  *@b: para 2
  *Return:
  */
void ab(size_t a, size_t b, char **argv)
{
	if (a > b)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
