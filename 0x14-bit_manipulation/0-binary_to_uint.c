#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 *binary_to_uint - convert binary number into an unsigned int
 *@b: value to be converted int0 unsigned integers
 *Return: decimal or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = (decimal << 1) + (*b - '0');
		b++;
	}
	return (decimal);
}
