#include "lists.h"

/**
  *free_listint2 - function that frees
  *@head: ptr ptr var
  *Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *pmet;/*temporary pointer to hold the head abt to be deleted*/
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while ((pmet = temp) != NULL)
	{
		temp = temp->next;/*transfers ref of nxt to temp*/
		free(pmet);
	}
	*head = NULL;
}
