#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: double pointer to the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
	return;
	
	while (*head)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	}

	*head = NULL;
}
