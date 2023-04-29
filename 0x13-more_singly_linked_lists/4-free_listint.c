#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *free_listint - frees a listint_t list.
 *@head: pointer to head of list node
 * Return: nothing
 */
void free_listint(listint_t *head)
{

	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
