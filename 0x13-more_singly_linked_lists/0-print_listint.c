#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - print singly linked list
 *@h: points to the head
 *Return: number of nodes;
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
