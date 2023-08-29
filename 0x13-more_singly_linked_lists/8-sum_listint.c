#include "lists.h"

/**
 * sum_listint - calculate the sum of the data values
 * @head: Traverse the linked list and add up the data
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
