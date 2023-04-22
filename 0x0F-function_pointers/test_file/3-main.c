#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - perform simple operation
 *@argc: number of argc
 *@argv: char point to data type
 *Return: o
*/
int main(int argc, char *argv[])
{
	int __attribute__((unused))calc, num1, num2;

	int __attribute__((unused))(*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{

		printf("Error\n");
		exit(100);
	}
	calc = operator(num1, num2);
	printf("%d\n", calc);

	return (0);
}
