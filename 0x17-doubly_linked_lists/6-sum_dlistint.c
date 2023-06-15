#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all element
 * @head: pointer point to the first node
 * Return: sum of all element in list.
 */

int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	/* check if list is empty*/
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
