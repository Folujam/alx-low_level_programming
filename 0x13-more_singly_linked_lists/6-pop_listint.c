#include "lists.h"

/**
  *pop_listint -  function that deletes the head node
  *@head: ptr ptr var
  *Return: int
  */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	a = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (a);
}
