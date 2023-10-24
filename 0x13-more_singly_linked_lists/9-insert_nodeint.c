#include "lists.h"

/**
  **insert_nodeint_at_index - funct that inserts a new node at a given position
  *@head: pointer to head to head of node
  *@idx: index (int var)
  *@n: int var
  *Return: pointer to listint_t
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nhed, *temp;

	nhed = malloc(sizeof(listint_t));
	if (nhed == NULL)
		return (NULL);
	nhed->n = n;
	if (idx == 0)
	{
		nhed->next = *head;
		*head = nhed;
	}
	else
	{
		temp = *head;
		while (idx-- > 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}
		nhed->next = temp->next;
		temp->next = nhed;
	}
	return (nhed);
}


