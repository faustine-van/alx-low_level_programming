#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *string_rev - print reverse recursively
 *@p: pointer point to string to be reverse
 *@begin: starting index character
 *@end: ending index character
 *another function
*/
void string_rev(char *p, int begin, int end)
{
	char tmp;

	/* base case */
	if (begin >= end)
	{
		return;
	}
	/*swap characters */
	tmp = p[begin];
	p[begin] = p[end];
	p[end] = tmp;

	string_rev(p, begin + 1, end - 1);
}

/**
 *is_palindrome - check if s pointer point to string
 *@s: string to be compared with @p string
 *Return: 1 if it's palidrome or 0 if  not
*/
int is_palindrome(char *s)
{
	char rev[20];

	strcpy(rev, s);
	string_rev(rev, 0, strlen(s) - 1);
	if (strcmp(s, rev) == 0)
		return (1);
	else
		return (0);
}

