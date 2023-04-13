#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *array_range - allocating array of integers
 *@max: maximun size
 *@min: minimun size
 *Return: ptr
*/
int *array_range(int min, int max)
{
	int a;
	int *ptr;
	int size = max - min + 1;


	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		ptr[a] = min++;
	}
	return (ptr);
}
