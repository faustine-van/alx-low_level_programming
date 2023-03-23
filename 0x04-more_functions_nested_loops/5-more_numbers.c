#include "main.h"
#include <stdio.h>

/**
 *more_numbers - uppercase letters
 *
 *Return: 0 or 1
 */
void more_numbers(void)
{
	int c;
	int b;

	for (c = 0; c < 10; c++)
	{
		for(b = 0; b <= 14; b++)
		{
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
