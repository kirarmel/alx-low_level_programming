#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely (handles loops).
 * @h: A pointer to the address of the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *next;
    listint_t *visited[1024];
    size_t count = 0, i;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;

    while (current != NULL)
    {
        for (i = 0; i < count; i++)
        {
            if (current == visited[i])
            {
                *h = NULL;
                return (count);
            }
        }

        visited[count] = current;
        next = current->next;
        free(current);
        current = next;
        count++;
    }

    *h = NULL;
    return (count);
}

