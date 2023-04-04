#include "main.h"
#include <stddef.h>
/**
 *_strstr - locates substring
 *@haystack: whole string in main
 *@needle: substring
 *Return: neddle or NUll if (*haystack != *needle)
*/
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; *haystack != '\0'; a++)
	{
		for (b = 0; *needle != '\0'; b++)
		{
			if (haystack[a] == needle[b])
			{
				return (needle);
			}
		}
	}
	if (*haystack != *needle)
		return (NULL);

	return (NULL);
}
