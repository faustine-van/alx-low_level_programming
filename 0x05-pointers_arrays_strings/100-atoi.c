#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *_atoi - convert string into integers
 *@s: to be tesed
 *Return: s
*/
int _atoi(char *s)
{
	int a;
	unsigned int value = 0;
	int current, sig, start;

	sig = 1;

	if (s[0] == '-')
	{
		sig = -1;
	}
	if (sig == -1)
	{
		start = 1;
	}
	else
		start = 0;

	a = start;

	while (s[a] != '\0')
	{
		if (isdigit(s[a]))
		{
			current = s[a] - 48;
			value = 10 * value + current;
		}
		a++;
	}
	if (start == 1)
	{
		value *= -1;
	}
	else
		value = value;
	return (value);
}
