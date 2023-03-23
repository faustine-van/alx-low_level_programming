#include "main.h"
#include <stdio.h>

/**
 *print_numbers - uppercase letters
 *
 *Return: 0 or 1
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
