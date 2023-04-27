#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *print_list - print list od data
 *@h: struct
 *Return: len;
*/
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		printf("empty");
		return (-1);
	}

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
