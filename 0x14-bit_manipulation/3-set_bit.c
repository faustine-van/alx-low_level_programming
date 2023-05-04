#include <stdio.h>
#include "main.h"

/**
 * set_bit - set bit at given position or index
 * @index: position
 * @n: value to used
 * Return: value have set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1 << index);

	return (1);
}
