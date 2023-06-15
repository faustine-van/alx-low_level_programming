#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: header pointer
 * @n: data in the node
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		/*traverse till the last node*/
		while (last->next != NULL)
		{
			last = last->next;
		}
		/*assign last node's next to this new Node*/
		last->next = new_node;
		/*assign this new node's previous to last node*/
		new_node->prev = last;
	}
	return (new_node);
}
