#include "main.h"
/**
 *factorial - print factorial number
 *@n: to be used
 *Return: n * factorial(n - 1) if it's not 0 or less than 0
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
