#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *_realloc - reallocate new block of memory
 *@ptr: address of previously memory block
 *@old_size: old size of memory point to ptr
 *@new_size: new size of  memory allocation
 *Return: new_memory block of sze(nptr)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr = NULL;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}


	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
		{
			return (NULL);
		}
		/* memcpy(nptr, ptr, new_size );*/
		memcpy(nptr, ptr, old_size > new_size ? old_size : new_size);
		free(ptr);
	}

	return (nptr);


}
