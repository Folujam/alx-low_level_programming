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
		for (a = 0; a < size; a++)
		{
			if (darr[i] == (hed = hed->next))
			{
				printf("[%p] %d", i, hed->n);
				break;
			}
			else
			{
				darr = hed->next;
				printf("[%p] %d", i, hed->n);
			}
			if (hed == NULL)
			{
				darr = malloc(size * sizeof(listint_t *));
			}
		}
	}
	return (i);
