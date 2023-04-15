#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *multiplies number
 *@argc: number of arguments
 *@argv: pointer point to the array
 *Return: 0
*/
int main(int argc, char __attribute__((unused))**argv)
{
	int mul, num1, num2,a;
	char *long_num;
	char print[5] =  "Error";

	mul = 1;

	if (argc != 3)
	{
		for (a = 0; a < 5 && print[a];a++)
		{
			_putchar(print[a]);
		}
		_putchar('\n');
	}
	else
	{
			num1 = strtol(argv[1], &long_num, 10);
			num2 = strtol(argv[2], &long_num, 10);

			if (*long_num)
			{
				_putchar('E');
				exit(98);
			}
			else
			{
				mul = num1 * num2; 
			}
		_putchar(48 + mul / 10);
		/*_putchar(mul % 10 + 48);*/
		_putchar('\n');
	}
	return (0);
}
