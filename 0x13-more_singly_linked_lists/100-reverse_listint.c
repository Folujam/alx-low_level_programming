#include "lists.h"

/**
  **reverse_listint - function that reverses a listint_t
  *@head: ptr ptr var
  *Return: pointer
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	return (prev);
}
