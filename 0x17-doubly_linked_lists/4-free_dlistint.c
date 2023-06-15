#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to the head node.
 */

void free_dlistint(dlistint_t *head)
{
	free(head);
}
