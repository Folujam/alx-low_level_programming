#include "lists.h"

/**
 *print_dlistint-  prints all the elements of a dlistint_t list
 *@h: pointer to struct
 *Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
    int node_count = 0;

    while (h != NULL)
    {
        printf("%d", h->n);
        node_count++;
        h = h->next;
    }
    return (node_count);
}
