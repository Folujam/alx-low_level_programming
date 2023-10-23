#include "lists.h"

/**
  **add_nodeint_end - function that adds a new node at the end
  *@head: pointer to node
  *@n: constant integer var
  *Return: pointer
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ne, *temp;

	ne = malloc(sizeof(listint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	ne->next = NULL;
	if (*head == NULL)
		*head = ne;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ne;
	}
	return (ne);
}
