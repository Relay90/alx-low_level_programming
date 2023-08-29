#include "lists.h"

/**
 * reverse_listint - takes a pointer to a pointer to the head of the
 * linked list.
 * @head: pointers of each node to point to the previous node
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{

		listint_t *next_node = current->next;

		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;
	return (*head);
}
