#include "3-calc.h"

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
		{0, NULL}
	};

	i = 0;
	while (*ops[i].op != '\0')
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
