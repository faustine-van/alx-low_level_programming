#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint - function that reverses a listint_t linked list.
 *@head: pointer to pointer to the first node
 *Return: return pointer(prev) to the first node in reverse where head = prev.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev;

	if (head != NULL)
	{
		prev = *head;/*prev pointer point the first node*/
		*head = (*head)->next;/*head pointer to second node*/
		temp = *head;/*temp points to to second node*/
		prev->next = NULL;/*make first node as last node*/

		while (*head != NULL)
		{
			*head = (*head)->next;/*point the next node repeat*/
			temp->next = prev;
			prev = temp;
			temp = *head;
		}
		*head = prev;/*make last node as head*/
	}
	else
	{
		return (NULL);
	}
	return (prev);
}
