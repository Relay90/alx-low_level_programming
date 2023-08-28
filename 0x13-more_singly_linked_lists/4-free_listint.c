#include "lists.h"

/**
 * free_listint - iterates through the linked list
 * @head: listint_t list to be freed
 *
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
	listint_t *temp = head;

	head = head->next;

	free(temp);
	}
}
