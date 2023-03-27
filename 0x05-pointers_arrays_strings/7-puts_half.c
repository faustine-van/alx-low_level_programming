#include "main.h"
#define MAXSTRING 446
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *puts_half - print half of string
 *@str: variable to print second half string
 *
*/
void puts_half(char *str)
{
	int len_str, count;

	len_str= strlen(str);

	if(len_str % 2 != 0)
	{
		count = (len_str / 2) + 1;
	}
	else
	{
		count = (len_str / 2);
	}
	while (count < len_str)
	{
		_putchar(*(str + count));
		count++;

	}
	_putchar('\n');
	
}
