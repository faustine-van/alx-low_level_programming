#include "main.h"
#include <ctype.h>

/**
 * _isdigit - uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */


int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
