#include "main.h"
#include <string.h>
/**
 *_strlen_recursion - print length of string
 *@s: used to calculate string length
 *Return: 0 if equal to 0
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return  (*s ? 1 + _strlen_recursion(s + 1) : 0);
}
