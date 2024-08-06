#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    const listint_t *visited[1024]; 
    size_t count = 0, i;

    while (current != NULL)
    {
        for (i = 0; i < count; i++)
        {
            if (current == visited[i])
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                return (count);
            }
        }

        visited[count] = current;
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
        count++;
    }

    return (count);
}
