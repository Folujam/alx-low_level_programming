#include "main.h"

/**
  *append_text_to_file - function that appends text at the end of a file
  *@filename: pointer to file loc
  *@text_content: pointer to text to be wrttn
  *Return: int
  */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fn;
	size_t d;

	if (filename == NULL)
		return (-1);
	fn = fopen(filename, "a");
	if (fn == NULL)
		return (-1);
	if (text_content != NULL)
	{
		d = fwrite(text_content, sizeof(char), strlen(text_content), fn);
		if (d < strlen(text_content))
			return (-1);
	}
	fclose(fn);
	return (1);
}
