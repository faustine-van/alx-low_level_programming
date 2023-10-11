#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary_rec - searches for a value in an sorted array of integers
 * using the binary search algorithm recursively
 * @a: pointer to the first element of the array to search in
 * @left: where array start
 * @right: where array ends
 * @val: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int advanced_binary_rec(int *a, size_t left, size_t right, int val)
{
	size_t i, midval;

	if (left <= right)
	{
		/* print the array being searched every time it changes */
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", a[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		midval = (left + right) / 2;

		if (a[midval] == val)
			return (midval);

		if (a[midval] > val)
			return (advanced_binary_rec(a, left, midval - 1, val));

		return (advanced_binary_rec(a, midval + 1, right, val));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in an sorted array of integers
 * using the binary search algorithm recursively
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_rec(array, 0, size - 1, value));
}
