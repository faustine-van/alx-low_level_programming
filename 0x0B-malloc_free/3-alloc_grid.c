#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *alloc_grid - allocate space for return pointer to 2d dimension
 *@width: to be used
 *@height: to be used
 *Return: ptr
*/
int **alloc_grid(int width, int height)
{
	int **ptr, a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));

		if (ptr[a] == NULL)
		{
			/*for (b = 0; b < a; b++)
			{
				free(ptr[a]);
			}
			free(ptr);*/
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;

		}
	}
	return (ptr);
	free(ptr[a]);
	free(ptr);
}
