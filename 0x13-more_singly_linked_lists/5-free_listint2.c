#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *@head: point to the listint_t lsi
 *Description: it cannot modify the head pointer itself,
 *and so it cannot set it to NULL after freeing the list.
 *This function is useful if you do not need to modify
 *the head pointer itself, and just need to free the nodes in the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/*checking if the head pointer itself is NULL*/
	/*or if the node it's pointing to is NULL.*/
	if (head == NULL && *head == NULL)
	{
		return;
	}

	while (*head != NULL)/*traverse entire list.*/
	{
		temp = *head;/*save node pointer.*/
		*head = (*head)->next;/*advance to next*/
		free(temp);/**free the saved one*/
	}
	*head = NULL; /* finally, mark as empty list */
}
