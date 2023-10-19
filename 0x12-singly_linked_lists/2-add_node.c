#include "lists.h"

/**
  **add_node -  function that adds a new node at the beginning of a list_t list
  *@head: ptr to head ptr
  *@str: string pointer
  *Return: pointer to new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (*head == NULL || str == NULL)
		return (0);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	return(newnode);
}
