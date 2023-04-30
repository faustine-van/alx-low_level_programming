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
	listint_t *delete = *head;/*Creat a temporary variable point to head*/
	unsigned int a, size  =  getsize(*head);/*get size of node*/
	listint_t *prev;

	if (*head == NULL)
	{
		/*check if list is empty*/
		return (-1);
	}
	if (index > size)/*check if index  is greater than number of node*/
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;/*store head on next node*/
		free(delete);/*delete node*/
		return (-1);
	}
	else
	{
		for (a = 0; a < index - 1; a++)
		{
			/*Now temp pointer points to the previous node*/
			/*of the node to be deleted*/
			delete = delete->next;
		}
		if (delete  == NULL)
			return (-1);
		prev = delete->next;/*del pointer points to the node to be deleted*/
		delete->next = delete->next->next;
		free(prev);/*delete node*/
	}
	return (1);
}
