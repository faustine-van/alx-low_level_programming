#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node_end - print list od data
 *@head: struct
 *@str: string
 *Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	/*create new  singled list node */
	new = malloc(sizeof(list_t));

	/* if unable to allocate memory for head node*/

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);/*Link data field of newNode*/
	new->len = strlen(str);
	/*make sure new node points to NULL*/
	new->next = NULL;

	/*inserts at the end of the linked list*/
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
