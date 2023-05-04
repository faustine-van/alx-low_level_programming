#include <stdio.h>
#include "main.h"

/**
 *flip_bits - the number of bits you would need to flip to get from
 *one number to another.
 *@n: number value
 *@m: Another number value
 *Return: return the number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int res = n ^ m;

	if (n == 0 && m == 0)
	{
		return (0);
	}
	for (count = 0; res > 0;)
	{
		if ((res & 1) == 1)
		/*res = res & (res - 1);*/
			count++;
		res = res >> 1;/*res >>= 1*/
	}
	return (count);
}
