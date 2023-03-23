#include "main.h"

/**
 * print_square - draw a square
 * @size: character to check
 *
 * Return: 0 or 1
 */
void print_square(int size)
{
	int k, i;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
