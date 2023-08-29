#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of type listint_t.
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		count++;

		if (temp >= current)
			break;

		current = temp;
	}

	*h = NULL;
	return (count);
}
