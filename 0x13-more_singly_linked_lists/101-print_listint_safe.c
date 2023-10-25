#include "lists.h"

/**
  *print_listint_safe - function that prints a list(safe version)
  *@head:ptr var
  *Return: number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	listint **darr;
	const listint_t *hed = head;
	int i, j, size = 32;

	darr = malloc(size * sizeof(listint_t *));
	if (darr == NULL)
		exit(98);
	for (i = 0; hed != NULL; i++)
	{
		darr[i] = hed;
		for (j = 0; j < i; j++)
		{
			if (darr[j] == hed)
			{
				printf("[%p] %d", darr[j], hed->n);
				return (i);
			}
		else
		{
			if (i == size)
			{
				size *= 2;
				darr = realloc(darr, size * sizeof(listit_t *));
				if (darr == NULL)
				{
					free(darr);
					exit(98);
				}
			}
			printf("[%p] %d",darr[i], hed->n);
		}
		hed =hed->next;
	}
	free(darr);
	return (i);
}
