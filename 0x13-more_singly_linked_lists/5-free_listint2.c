#include "lists.h"

/**
  *free_listint2 - function that frees
  *@head: ptr ptr var
  *Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *pmet;

	if (*head == NULL || head == NULL)
		return;
	while (*head != NULL)
	{
		pmet = (*head)->next;
		free(*head);
		*head = pmet;
	}
	*head = NULL;
}
