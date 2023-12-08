#include "lists.h"

/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
*@head: pointer to start of the list
*@index: position at which node is gotten
*Return: dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
