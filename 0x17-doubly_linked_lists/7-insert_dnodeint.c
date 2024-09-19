#include "lists.h"
#include <stdlib.h>  /* Add this line to include malloc */

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index where the new node is to be inserted (starts at 0)
 * @n: value for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i = 0;

    if (h == NULL)
        return (NULL);

    if (idx == 0)
        return (add_dnodeint(h, n)); /* Insert at the beginning */

    current = *h;
    while (current && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL && i == idx - 1) /* Insert at the end */
        return (add_dnodeint_end(h, n));

    if (current == NULL) /* Index is out of bounds */
        return (NULL);

    new_node = malloc(sizeof(dlistint_t)); /* Allocate memory for new node */
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = current->next;
    new_node->prev = current;

    if (current->next)
        current->next->prev = new_node;

    current->next = new_node;

    return (new_node);
}
