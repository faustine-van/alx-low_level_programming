#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
	exit(0);
}
