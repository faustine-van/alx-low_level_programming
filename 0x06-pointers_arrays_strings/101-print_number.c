#include "main.h"
/**
 *print_number - print integers using _putchar function
 *@n: to be tested
 *
*/
void print_number(int n)
{
	int result;

	if (n  < 0)
	{
		result = -n;
		_putchar('-');
	}
	else
	{
		result = n;
	}

	if (result / 10)
	{
		print_number(result / 10);
	}
	_putchar (result % 10 + '0');
}
