#include "main.h"
/**
 *print_sign - print sign of given number
 *@n: to test
 *Return: 1  print + of number
 *
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
	return (-1);
}
