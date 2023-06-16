#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get node from dlistint_t list.
 * @head : pointer point to the first node
 * @index: index of node to be get
 * Return: node  or NULL if it fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->next;
	current = head;
	while (current != NULL && count < index)
	{
		if (count == index)
			break;
		count++;
		current = current->next;
	}
	return (current);
}
