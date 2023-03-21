#include "main.h"
/**
 *print_last_digit - prints the last digit
 * @n: Number to be tested
 *
 *
 * Return: c if its the last digit .
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}

	_putchar('0' + n);

	return (n);
}
