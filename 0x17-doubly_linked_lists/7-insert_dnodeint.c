#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inser node at a given position
 * @h: pointer point to the first node.
 * @idx: given position
 * @n:  data
 * Return: return newNode or NULL if its fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 1)
	{
		add_dnodeint(h, n);
	}
	else
	{
		current = *h;
		for (i = 1; i < idx - 1 && current != NULL; i++)
			current = current->next;

		if (current == NULL)
			return (NULL);

		newNode->next =  current->next;
		if (current->next != NULL)
			current->next->prev = newNode;

		newNode->prev = current;
		current->next = newNode;
	}
	return (newNode);
}
