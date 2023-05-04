#include <stdio.h>
#include "main.h"

/**
 *print_binary - print binary number
 *@n: value to be printed in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int a;
	int rem_zero = 0;

	for (a = 63; a >= 0; a--)
	{
		if ((n >> a) & 1)
		{
			_putchar('1');
			rem_zero = 1;
		}
		else if (rem_zero)
		{
			_putchar('0');
		}
	}

	if (!rem_zero)
	{
		_putchar('0');
	}
}
