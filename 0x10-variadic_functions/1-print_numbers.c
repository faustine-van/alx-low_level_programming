#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - prints number passed in fuction argument
 *@separator: constant char string
 *@n: number of argument passed in function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
	if (i != n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	}
	printf("\n");

}
