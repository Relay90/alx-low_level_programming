#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Write a function that returns the number of elements in a linked
 * @h: creat a pointer that intial points to the head of the linked list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current++;
		current = current->next;
	}
	return (n);
}
