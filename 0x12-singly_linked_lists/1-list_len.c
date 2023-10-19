#include "lists.h"

/**
  *
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
