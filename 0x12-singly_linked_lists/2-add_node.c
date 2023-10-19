#include "lists.h"

/**
  **add_node -  function that adds a new node at the beginning of a list_t list
  *@head: ptr to head ptr
  *@str: string pointer
  *Return: pointer to new element
  */
list_t *add_node(list_t **head, const char *str)
{
	int a, len;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
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
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
