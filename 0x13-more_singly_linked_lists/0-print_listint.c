#include "lists.h"

/**
  *print_listint - prints all elements of a listint
  *@h: pointer var
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int ctr = 0;

	if (h == 0)
		return (0);
	while (h != 0)
	{
		printf("%d\n", h->n);
		ctr++;
		h = h->next;
	}
	return (ctr);
}

