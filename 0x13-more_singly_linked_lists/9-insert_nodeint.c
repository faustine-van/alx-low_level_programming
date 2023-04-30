#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - insert new node to any given position
 *@head: pointer to pointer to the head node of listint_t list
 *@n: data
 *@idx: position given
 *Return: address of  new node else return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, size = 0;
	listint_t *current = *head;
	listint_t *newNode;

	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	if (idx > size)
	{
		/* Index out of range*/
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		/* Error allocating memory*/
		return  (NULL);
	}
	newNode->n = n;
	if (idx == 0)
	{
		/* Insert at beginning of list*/
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		/* Traverse list to find node before position*/
		current = *head;
		for (i = 0; i < idx - 1; i++)
		{
			current = current->next;
		}
		/* Insert new node after node at position-1*/
		newNode->next = current->next;
		current->next = newNode;
	}
	return (newNode);
}
