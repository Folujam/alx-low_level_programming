#include "lists.h"

/**
  *free_listint - function that frees
  *@head: pointer
  *Return:
  */
void free_listint(listint_t *head)
{
	listint_t *pot;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		pot = head->next;
		free(head);
		head = pot;
	}
}
