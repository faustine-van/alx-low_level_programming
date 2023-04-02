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
	int i = 0;
	unsigned int value = 0;
	int current;

	if (s[i] == '-')
	{
		value *= -1;
	}
	while (s[i] != '\0')
	{
		if (isdigit(s[i]))
		{
			current = s[i] - 48;
			value = 10 * value + current;
		}
		i++;
	}
	return (value);
}
