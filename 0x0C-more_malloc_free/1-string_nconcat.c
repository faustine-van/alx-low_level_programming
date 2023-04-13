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
	/*unsigned int a;*/
	/*int b;*/
	unsigned int len = strlen(s1);
	unsigned int len1 = strlen(s2);
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
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
	free(ptr);
}

