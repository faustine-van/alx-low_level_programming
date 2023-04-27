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

	new = malloc(sizeof(list_t));

	if (new  == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	if (new->next == NULL)
	{
		return (NULL);
	}

	free(new->next);
	free(new);
	return (new->next);
}
