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
	int i, a, size = 32;

	darr = malloc(size * sizeof(listint_t *));
	if (darr == NULL)
		exit(98);
	for (i = 0; hed != NULL; i++)
	{
		darr[i] = hed;
		if (darr[i] > 0 && darr[i] == darr[i - 1])
		{
			printf("[%p] %d", i, hed->n);
			break;
		}
		else
		{
			if (i == size)
			{
				size = 64;
				darr = realloc(size * sizeof(listint_t *));
				if (darr == NULL)
					free(darr);
					exit(98);
			}
			darr[i] = hed->next;
			printf("[%p] %d",darr[i], hed->n);
		}
		hed =hed->next;
	}
	free(darr);
	return (i);
}
