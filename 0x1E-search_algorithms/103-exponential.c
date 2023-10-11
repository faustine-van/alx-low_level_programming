#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * min - find the low number
 * @a: start number
 * @b: end number
 * Return: low number
 */

int min(int a, int b)
{
	return ((a < b) ? a : b);
}

/**
 * binary_rec - searches for a value in an sorted array of integers
 * using the binary search algorithm recursively
 * @a: pointer to the first element of the array to search in
 * @left: start index number in array
 * @right: end index number in array
 * @val: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int binary_rec(int *a, size_t left, size_t right, int val)
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
			return (binary_rec(a, left, midval - 1, val));

		return (binary_rec(a, midval + 1, right, val));
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in an sorted array of integers
 * using the exponential_search search algorithm recursively
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index, or NULL if element not found in array or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t a = 1;
	size_t left;
	size_t right;

	if (array[0] == value)
		return (0);
	while (a < size && array[a] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = a * 2;
	}
	left = a / 2;
	right = min(a, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	return (binary_rec(array, left, right, value));
}
