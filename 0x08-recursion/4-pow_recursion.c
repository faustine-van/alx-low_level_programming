#include "main.h"
/**
 *_pow_recursion - return value of x raised to the power of y
 *@y: power value
 *@x: base value
 *Return: x; 
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	/*if y = 2 then x * x */
	if (y == 2)
		return (x * x);

	else
		return (x * _pow_recursion(x, y - 1));
}
