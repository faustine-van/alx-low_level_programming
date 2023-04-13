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
	unsigned int a;
	char *ptr;
	int len = strlen(s1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ptr = malloc(n * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	a = 0;
	strcpy(ptr, s1);
	while (a < n)
	{
		ptr[a + len] = *s2++;
		a++;
	}
	return (ptr);
}

