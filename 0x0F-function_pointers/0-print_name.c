#include "function_pointers.h"

/**
  *print_name - prints name
  *@name: pointer var to char
  *@f: fp
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0)
	{
		f(name);/* Call the func pointd to by f, passing name as an arg*/
	}
}
