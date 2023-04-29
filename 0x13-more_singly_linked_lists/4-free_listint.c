#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *free_listint - frees a listint_t list.
 *@head: pointer to head of list node
 *
 *Descrption: it cannot modify the head pointer itself, 
 *and so it cannot set it to NULL after freeing the list.
 *This function is useful if you do not need to modify the
 *head pointer itself, and just need to free the nodes in the list.
 *Return: nothing
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
