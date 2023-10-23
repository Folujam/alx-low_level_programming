#include "lists.h"

/**
  **get_nodeint_at_index - function that returns the nth node
  *@head: ptr var
  *@index: as the name implies(int)
  *Return: int
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ctr = 0;
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (ctr == index)
			return (head);
		head = (*head)->next;
		ctr++;
	}
	return (NULL);
}
