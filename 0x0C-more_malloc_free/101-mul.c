#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *multiplies number
 *@argc: number of arguments
 *@argv: pointer point to the array
 *Return: 0
*/
void my_putchar(long int inte_gers);
int main(int argc, char __attribute__((unused))**argv)
{
	long int *mul, num1, num2;
	int a;
	char *long_num;
	int *ptr;
	char print[5] =  "Error";

	mul = 1;

	ptr = malloc(argc * sizeof(mul));

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
		strcpy(ptr, mul);	
		my_putchar(ptr);
		_putchar('\n');
	}
	return (ptr);
}

void my_putchar(long int inte_gers)
{
	if (inte_gers < 0)
	{
		_putchar('-');
		inte_gers *= inte_gers * -1;
	}
	if (inte_gers == 0)
		_putchar('0');
	if (inte_gers / 10)
		my_putchar(inte_gers / 10);
	_putchar(inte_gers % 10 + '0');
}
