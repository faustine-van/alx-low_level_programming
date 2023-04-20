#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - returns sum of all its parameters
 *@n: number of argument to be passed
 *Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list num_param;
	unsigned int i;

	int sum = 0;

	va_start(num_param, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num_param, int);
	}

	va_end(num_param);

	return (sum);
}
