#include "main.h"
#include <stdio.h>
#define MAX_SIZE 100

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	/*pointer to array[n -1]*/
	int *str1, *str2;
	str1 = 0;
	str2 = a - 1;

	while (str1 < str2)
	{
		int temp;
		temp = *str1[n];
		*str2[n] = temp;

		str1++;
		str2++;

	}
	/*
		if (n != 0)
		{*/
	printf("\n");
}
