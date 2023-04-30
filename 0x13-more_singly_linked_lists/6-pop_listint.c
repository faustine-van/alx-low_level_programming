#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *
 *@head: pointer to pointer to head of the listint_t list
 *
 *Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	delete = *head;
	*head = (*head)->next;
	data = delete->n;
	free(delete);
	return (data);
}
