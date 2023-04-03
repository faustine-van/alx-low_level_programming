#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strchr - search accurences character
 *@s: string to be searched
 *@c: character from s string
 *Return: s because *s = c
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	/*for (;; s++) */
	/*if (*s == c)*/
	/*return(s);*/
	/*if (!*s)*/
	/*return (NULL);}*/
	return (NULL);
}
