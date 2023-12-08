#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a givex position
 *@h: pointer to start of the list
 *@idx: index at which b4 to add node
 *@n: data to be contained in new node
 *Return: address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *nnode, *temp;
    unsigned int i;

    nnode = malloc(sizeof(dlistint_t));
    if (nnode == NULL)
        return (NULL);
    nnode->n = n;
    if (idx == 0)
    {
        if (*h == NULL)
        {
            nnode->next = NULL;
            nnode->prev = NULL;
            *h = nnode;
        }
        else
        {
            (*h)->prev = nnode;
            nnode->prev = NULL;
            nnode->next = *h;
            *h = nnode;
        }
    }
    else
    {
        temp = *h;
        i = 0;
        while (i < idx)
        {
            i++;
            if (temp == NULL)
                return (NULL);
            temp = temp->next;
        }
        if (temp == NULL)
        {
            free(nnode);
            nnode = add_dnodeint_end(h, n);
        }
        else
        {
            nnode->next = temp;
            nnode->prev = temp->prev;
            if (temp != NULL && temp->prev != NULL)
                temp->prev->next = nnode;
            if (temp != NULL)
                temp->prev = nnode;
        }
    }
    return (nnode);

}
