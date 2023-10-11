#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * interpolation_rec - searches for a value in an sorted array of integers
 * using the interpolation search algorithm recursively
 * @array: pointer to the first element of the array to search in
 * @low:start index number of elements in array
 * @high: end index number of elements in array
 * @value: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int interpolation_rec(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] -
			array[low])) * (value - array[low]));

	if ((low <= high) && (value <= array[high]) && (value >= array[low]))
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		if (value < array[pos])
			return (interpolation_rec(array, low, pos - 1, value));
		return (interpolation_rec(array, pos + 1, high, value));

	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

/**
 * interpolation_search - searches for a value in an sorted array of integers
 * using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (interpolation_rec(array, 0, size - 1, value));
}
