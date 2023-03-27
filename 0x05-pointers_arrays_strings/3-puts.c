#include "main.h"
#define MAXSTRING 446
/**
 *_puts - print a string
 *@str: pointer variable to be used;
 *
*/
void _puts(char *str)
{
	int count;

	for (count = 0; count <  MAXSTRING; count++)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(str[count]);
	}
}
