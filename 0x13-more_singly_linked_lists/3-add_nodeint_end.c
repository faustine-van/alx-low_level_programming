#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 *@head: pointer pointing to the node
 *@n: data
 * Return: return address of new element or null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNodeInt, *temp;

	newNodeInt = malloc(sizeof(listint_t));
	if (newNodeInt == NULL)
	{
		return (NULL);
	}
	newNodeInt->n = n;
	newNodeInt->next = NULL;

	if (*head == NULL)
	{
		*head = newNodeInt;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNodeInt;
	}
	return (newNodeInt);
}
