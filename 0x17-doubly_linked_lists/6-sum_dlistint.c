#include "lists.h"

/**
*sum_dlistint - sums all the data(n) of a dlistint_t linked list.
*@head: pointer to start of the list
*Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
