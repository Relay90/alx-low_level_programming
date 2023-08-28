#include "lists.h"

/**
 * listint_len - retutns number of elements in a linked
 * @h: Traverse the linked list and count the elements
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
