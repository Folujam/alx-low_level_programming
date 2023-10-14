#include "3-calc.h"
#include <string.h>

/**
  *get_op_func - selects the correct function to perform
  *@s: string pointer
  *Return: int
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != '\0')
	{
		if (strcmp(s, ops[i].op))
		{
			return (ops[i].func);
		}
		i++;
	}
	return (0);
}
