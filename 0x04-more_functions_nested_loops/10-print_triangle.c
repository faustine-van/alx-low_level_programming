#include "main.h"

/**
 * print_triangle - drawing a triangle
 * @size: input variable
 *
 * Return: void
 */
void print_triangle(int size)
{
	int k, i;

	if (size <= 0)
		_putchar('\n');
		for (i = 1; i < size; i++)
		{
			for (k = 1; k <= i; k++)
			{
				if (k <= (size - 1))

					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
}
