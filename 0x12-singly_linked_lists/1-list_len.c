#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *list_len - print list od data
 *@h: struct
 *Return: returns the number of elements in a linked list_t list;
*/
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
