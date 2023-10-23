#include "lists.h"

/**
  **add_nodeint -  function that adds a new node at the beginning
  *@head: pointer to first node
  *@n: var to data(int)
  *Return: pointer
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (nn);
}
