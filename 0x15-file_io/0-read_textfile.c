#include "main.h"

/**
  *read_textfile - func that reads a text file & prints it to the POSIX std out
  *@filename: pointer to file location
  *@letter: num of letters it should read
  *Return: ssize_t(actual num of lettrs it r&p)
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t a, b;
	char *buffe;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	buffe = malloc(letters * sizeof(char));
	if (buffe == NULL)
		return (0);
	a = fread(buffe, sizeof(char), letters, fp);
	if (a < letters)
	{
		free(buffe);
		return (a);
	}
	b = fwrite(buffe, sizeof(char), a, stdout);
	if (b < a)
	{
		free(buffe);
		fclose(fp);
		return (0);
	}
	free(buffe);
	fclose(fp);
	return (b);
}
