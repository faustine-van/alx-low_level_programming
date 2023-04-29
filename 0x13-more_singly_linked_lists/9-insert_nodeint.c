#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - insert new node to any given position
 *@head: pointer to pointer to the head node of listint_t list
 *@n: data
 *idx: position given
 *Return: address of  new node else return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int a;

	if (!idx)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n; /* link data part*/
		temp = *head;
		/*
		 *traverse to the n - 1 position
		 */
		for (a = 0; a < idx - 1; a++)
		{
			temp = temp->next;/*advance or accept next node*/
			if (temp == NULL)
				break;
		}
		if (temp != NULL)
		{
			newNode->next = temp->next; /*link address part of new node*/
			temp->next = newNode;
		}
		return (newNode);
	}
}
