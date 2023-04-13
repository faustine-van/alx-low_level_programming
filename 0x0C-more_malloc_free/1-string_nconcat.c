#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concanate two string using malloc to allocated space
 *@s1: destination of string
 *@s2: source string
 *@n: number of size
 *Return: ptr;
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*unsigned int a;*/
	/*int b;*/
	/*int len = strlen(s1);*/
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);

	if (n >= strlen(s2))
	{
		strcat(s1, s2);
	}
	return (ptr);
}

