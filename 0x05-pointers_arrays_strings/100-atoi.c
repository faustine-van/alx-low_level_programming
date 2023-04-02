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

	
	if (s[0]  == '-')
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
		
	return value;

	/*int a;
	int sig, start;
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
			if (isdigit(s[a]))  the same as if(*s >= 48 && *s <= 57)*/
				/*num = num * 10 + s[a] - 48;
	}
	if (sig == -1)
	{
		num *= -1;
	} 
	else
	{
		 num = num;
	}

	return (num);*/

}
