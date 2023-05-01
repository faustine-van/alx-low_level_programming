#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *getsize - number of nodes in listint_t
 *@head: pointer to first node in listint_t lists
 *Description - fincd number of node
 *Return: number of node
*/
unsigned int getsize(listint_t *head)
{
	unsigned int size = 0;

	while (head != NULL)
	{
		head  = head->next;
		size++;
	}
	return (size);
}

/**
 *delete_nodeint_at_index - delete node at a given position
 *@head: pointer to pointer pointing to the first node
 *@index: given position of node to be deleted
 *Return: 1 if successed or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *prev;/*Creat a temporary variables point to head*/
	unsigned int a;

	if (*head == NULL)
	{
		/*check if list is empty*/
		return (-1);
	}
	else
	{
		delete = *head;
		prev = *head;
		for (a = 0; a < index; a++)
		{
			prev = delete;
			/*Now temp pointer points to the previous node*/
			/*of the node to be deleted*/
			delete = delete->next;
			if (delete == NULL)
				break;
		}
		if (delete  != NULL)
		{
			if (delete == *head)
				*head = (*head)->next;
			prev->next = delete->next;
			delete->next = NULL;
			free(delete);/*delete node*/
		}
		else
		{
			return (-1);
		}
	}
	return (1);
}
