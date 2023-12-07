#include "lists.h"

/**
*dlistint_len -  returns the number of elements in a linked dlistint_t list
*@h: pointer to struct
*Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
