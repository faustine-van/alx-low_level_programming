#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 *int_index - search for integers
 *@array: array to printed pointed to the fucntion
 *@size: size of loop
 *@cmp: call functions
 *Return: -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	a = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	}
	return (-1);
}
