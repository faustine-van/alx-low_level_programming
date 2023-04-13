#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concanate two string using malloc to allocated space
 *@s1: destination of string
 *@s2: source string
 *@n: number of size
 *Return: ptr
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	
	unsigned int len;
	unsigned int len1;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = strlen(s1);
	len1 = strnlen(s2, n);

	if (n >= len1)
		n = len1;

	ptr = malloc(len + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strncat(ptr, s2, n);

	return (ptr);
}

