#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *_atoi - convert string into integers
 *@s: to be tesed
 *Return: s
*/
int _atoi(char *s)
{
	int a, sig, start;
	unsigned int num;

	if (s[0] == '-')
	{
		sig = -1;
	}
	if (sig == -1)
	{
		start = 1;
	}
	else
	{
		start = 0;
	}
	num = 0;


	for (a = start; s[a] != '\0'; a++)
	{
		num = num * 10 + s[a] - 48;
	}
	if (sig == -1)
	{
		num = -num;
	}
	return (num);
}
