#include "lists.h"

/**
* add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
* @head: ptr ptr to start of list
* @n: int
* Return: dlistint_t
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp_node = *head;
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = new_node;
		new_node->prev = temp_node;
	}
	return (new_node);
}
