#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 *array_iterator - print array
 *@array: array to printed pointed to the fucntion
 *@size: size of loop
 *@action: call functions
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
