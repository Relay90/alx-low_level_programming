#include <stdlib.h>

/**
 * *add_nodeint - Create a new node
 * @head: Update the head to point to the new node
 * @n: Initialize the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new;

	return (new_node);
}

