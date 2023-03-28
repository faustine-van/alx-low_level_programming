#include "main.h"
#define MAXSTRING 446
#include <ctype.h>
#include <string.h>
/**
 *print_rev - print reverse of string using pointer
 *@s: char pointer to be tested
 *
*/
void print_rev(char *s)
{
	int i, b;

	b = 0;

	while (s[b] != '\0')
		b++;
	for (i = b - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
