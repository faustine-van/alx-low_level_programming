#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocate memory using malloc malloc have
 *to work calloc function
 *@nmemb: number of block
 *@size: number of each blocK
 *Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);


	if (ptr == NULL)
	{
		return (NULL);
	}
	/*set allocated memory to 0*/
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
