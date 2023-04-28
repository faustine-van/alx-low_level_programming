#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - print list od data
 *@head: struct
 *@str: string
 *Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	/*create new singled list node*/
	new = malloc(sizeof(list_t));


	/* if unable to allocate memory for head node*/
	if (new == NULL)
		return (NULL);

	/*insert new node at the beginning*/
	new->str = strdup(str);/* duplicate str */
	new->len = strlen(str);/* length of str string*/
	new->next = *head;/*new point to head node*/

	*head = new;

	return (new);
}
