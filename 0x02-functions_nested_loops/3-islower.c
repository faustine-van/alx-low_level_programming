#include "main.h"
/**
 *_islower - check alphabet in lower case
 *@c: used to test
 *Return: 1 if its lower case
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

