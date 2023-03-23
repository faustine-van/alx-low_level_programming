#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - draw a diagonal line
 * @n: character to check
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		for (x = 0; x < n; x++)
		{
			int t;

			for (t = 0; t < x; t++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}


}
