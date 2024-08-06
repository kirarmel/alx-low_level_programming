#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
	*head = new_node;
	return (new_node);
	}
	
	while (current->next)
	{
	current = current->next;
	}
	
	current->next = new_node;
	
	return (new_node);
}
