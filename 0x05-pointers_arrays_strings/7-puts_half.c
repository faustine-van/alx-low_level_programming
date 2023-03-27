#include "main.h"
#define MAXSTRING 446
#include <string.h>
/**
 *puts_half - print half of string
 *@str: variable to print second half string
 *
*/
void puts_half(char *str)
{
	char first_half_string[100], last_half_string[100];
	int count, len, half;

	len = strlen(str);
	half = len / 2;

	for (count = 0; count < half; count++)
	{
		first_half_string[100] = str[count];
	}
	first_half_string[100] = '\0';

	for (count = half; count <= len; count++)
	{
		_putchar(str[count]);
	}
}
