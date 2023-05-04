#include <stdio.h>
#include "main.h"

/**
 *get_bit - get bit at given position or index
 *@n: value to be printed in binary
 *@index: position
 *Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;

	if (bit == -1)
		return (-1);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (bit);
}
