#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 *_strpbrk - search for string for any bytes
 * @accept: to be used
 * @s: pointer to store string
 *
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s++)
	{
		if ((strchr(accept, *s)))
			return (s);
	}
	return (NULL);
}
