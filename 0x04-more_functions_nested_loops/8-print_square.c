#include "main.h"

/**
 * print_square - draw a square
 * @size: character to check
 *
 * Return: 0 or 1
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
