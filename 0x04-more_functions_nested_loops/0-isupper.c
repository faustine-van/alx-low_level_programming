#include "main.h"

/**
* _isupper - check if its upper case
* @c: to test the alphabets
* Return: 1 if it true else 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
