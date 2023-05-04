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
	int rem_zero = 1;

	for (a = 31; a >= 0; a--)
	{
		if (n & (1 << a))
		{
			rem_zero = 0;
			_putchar ('1');
		}
		else if (!rem_zero)
		{
			_putchar('0');
		}
	}
	if (rem_zero)
	{
		putchar('0');
	}
}
