#include "lists.h"

/**
  *listint_len - function that returns the number of elements
  *@h: pointer
  *Return: int(lenght of list)
  */
size_t listint_len(const listint_t *h)
{
	int ctr = 0;

	while (h != 0)
	{
		ctr++;
		h = h->next;
	}
	return (ctr);
}
