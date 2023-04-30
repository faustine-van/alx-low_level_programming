#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@index: index of node
 *@head: pointer to node of listint_t  list nodes
 *Return: returns the nth node else return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		/*check if the node does not exist, return NULL*/
		return (NULL);
	}
	else
	{
		temp = head;
		while (head != NULL)
		{
			if (count == index)
				return (temp);
			count++;
			temp = temp->next;
		}
	}
	return (temp);
}
