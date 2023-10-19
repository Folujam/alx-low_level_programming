#include "lists.h"

/**
  *print_list - function that prints all the elements of a list_t list.
  *@h: pointer to str in h field
  *Return: counter
  */
size_t print_list(const list_t *h)
{
	int ctr = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		ctr++;
		h = h->next;
	}
	return (ctr);
}
