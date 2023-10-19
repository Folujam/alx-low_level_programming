#include "lists.h"

/**
  **add_node_end - function
  *@head: ptr to ptr
  *@str: ptr
  *Return: ptr(malloc'd)
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int a, len;
	list_t *newend, *temp;

	newend = malloc(sizeof(list_t));
	if (newend == NULL)
		return (NULL);
	newend->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	a = 0;
	while (str[a])
		a++;
	len = a;
	newnode->len = len;
	newend->next = NULL;
	if (*head == NULL)
		*head = newend;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newend;
	}
	return (newend);
}
