#include "lists.h"

/**
 * free_listint2 - iterates through the free linked list
 * @head: pointer to NULL to indicate that the list is now empty.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
