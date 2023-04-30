#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - add a new node at the end of a listint_t list
 *@head: pointer pointing to the node of listint_t
 * Return: sum of all data of listin_t
 */
int sum_listint(listint_t *head)
{
	/*initialize sum to 0*/
	int sum = 0;

	if (head == NULL)
	{
		/*when list is empty*/
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
