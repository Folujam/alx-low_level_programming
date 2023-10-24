#include "lists.h"

/**
  *delete_nodeint_at_index -  function that deletes the node at index
  *@head: ptr ptr var
  *@index: u int var
  *Return: int
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hed, *node_2del;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		hed = *head;
		*head = (*head)->next;
		free(hed);
	}
	else
	{
		hed = *head;
		for (i = 0; i < index - 1; i++)
		{
			if (hed == NULL)
				return (-1);
			hed = hed->next;
		}
		node_2del = hed->next;
		hed->next = node_2del->next;
		free(node_2del);
	}
	return (1);
}
