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
	int count = 0;
	int res = n ^ m;

	if (n == 0 && m == 0)
	{
		return (0);
	}
	while (res > 0)
	{
		if ((res & 1) == 1)
		/*res = res & (res - 1);*/
		count++;
		res >>= 1;
	}
	return (count);
}
