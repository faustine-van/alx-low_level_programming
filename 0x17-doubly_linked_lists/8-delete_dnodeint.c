#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given position
 * @head: head pointer point to the first node
 * @index: given index where there is node to delete
 * Return: 1 for IF IT SUCCESS or -1 if it fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1); /* Index out of bounds*/
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
