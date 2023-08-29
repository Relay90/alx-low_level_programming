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
	listint_t *next = *head;

	while (*head)
	{

	next = (*head)->next;

	(*head)->next = prev;
	prev = *head;
	*head = next;
	}

	*head = prev;

	return (*head);
}

