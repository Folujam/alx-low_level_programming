#include "lists.h"

/**
  *list_len -function that returns the number of elements in a linked list_t.
  *@h: pointer
  *Return: counter
  */
size_t list_len(const list_t *h)
{
	int ctr = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		ctr++;
		h = h->next;
	}
	return (ctr);
}
