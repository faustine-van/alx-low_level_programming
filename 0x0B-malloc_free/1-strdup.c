#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 *_strdup - print duplicated string using copy of allocated pointed by str
 *@str: string to duplicated
 *Return: ptr tha pointed by str
*/
char *_strdup(char *str)
{
	char *ptr;
	int a;

	int len = strlen(str) + 1;

	ptr = malloc(len);

		/*strcpy(ptr, str);*/
	a = 0;
	while (a < len)
	{
		ptr[a] = str[a];
		a++;
	}
	if (ptr == NULL)
		return (NULL);

	return (ptr);
	free(str);
}
