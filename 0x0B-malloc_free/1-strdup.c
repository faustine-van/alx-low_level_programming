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

	int len = strlen(str) + 1;

	ptr = malloc(len);

	if (str != ptr)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{

		/*strcpy(ptr, str);*/
		int a = 0;

		while (a < len)
		{
			ptr[a] = str[a];
			a++;
		}
	}
	else
		return (NULL);

	return (ptr);
	free(str);
}
