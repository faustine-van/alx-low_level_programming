#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *@head: point to the listint_t lsi
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)/*traverse entire list.*/
	{
		temp = *head;/*save node pointer.*/
		*head = (*head)->next;/*advance to next*/
		free(temp);/**free the saved one*/
	}
	*head = NULL; /* finally, mark as empty list */
}
