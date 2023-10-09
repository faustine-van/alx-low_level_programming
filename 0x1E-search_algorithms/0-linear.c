#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *  linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;
	int found = 0;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (array[a] == value)
		{
			return (a);
			found = 1;
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	}
	if (found == 0)
		return (-1);
	return (-1);
}
