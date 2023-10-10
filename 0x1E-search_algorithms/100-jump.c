#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 *  jump_search - searches for a value in an sorted array of integers
 * using the jumb search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, prev = 0;
	size_t step = sqrt(size); /* initialize block size */
	size_t start;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[prev] < value && prev < size)
	{
		prev += step;
		if (prev < size)
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		else
			break;
	}
	start = prev - step;
	printf("Value found between indexes [%ld] and [%ld]\n", start, prev);
	for (i = start; i <= prev && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	/*printf("Value found between indexes [%ld] and [%ld]\n", a, p);*/
	return (-1);
}
