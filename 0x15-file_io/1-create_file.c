#include "main.h"

/**
  *create_file -  function that creates a file.
  *@filename: pointer to file location
  *@text_content: pointer
  *Return: int
  */
int create_file(const char *filename, char *text_content)
{
	FILE *fil;
	size_t ewe;
	int kele;

	if (filename == NULL)
		return (-1);
	fil = fopen(filename, "w");
	if (fil == NULL)
		return (-1);
	if (text_content != NULL)
	{
		ewe = fwrite(text_content, sizeof(char), strlen(text_content), fil);
		if (ewe < strlen(text_content))
		{
			fclose(fil);
			return (-1);
		}
	}
	kele = chmod(filename, S_IRUSR | S_IWUSR);
	if (kele == -1)
		return (-1);
	fclose(fil);
	return (1);
}
