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
	unsigned long int bit;

	bit = (n >> index) & 1;

	return (bit);
}
