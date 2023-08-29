#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index) {
    if (head == NULL || *head == NULL)
        return -1;  // Failed

    if (index == 0) {
        listint_t *temp = *head;
        *head = (*head)->next;
        free(temp);
        return 1;  // Succeeded
    }

    listint_t *current = *head;
    for (unsigned int i = 0; current != NULL && i < index - 1; i++) {
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
        return -1;  // Failed

    listint_t *temp = current->next;
    current->next = temp->next;
    free(temp);
    return 1;
}
