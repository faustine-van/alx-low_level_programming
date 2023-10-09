#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *  binary_search - searches for a value in an sorted array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int a, left = 0;
	int right = size - 1; /*position of the right*/
	int midVal;

	if ((array == NULL) || (left > right))
		return (-1);

	while (left <= right)
	{
		/* print the array being searched every time it changes */
		printf("Searching in array: ");
		for (a = left; a <= right; a++)
		{
			printf("%d", array[a]);
			if (a < right)
				printf(", ");
		}
		printf("\n");
		/* find mid value */
		midVal = (left + right) / 2;
		if (value == array[midVal])
			return (midVal);
		else if (value < array[midVal])
			right = midVal - 1;
		else
			left = midVal + 1;
	}
	return (-1);
}
