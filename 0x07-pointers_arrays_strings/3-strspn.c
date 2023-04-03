#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strspn - get length of substring
 *@accept: substring
 *@s: string
 *Return: count(length of accept string)
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (count);
		}
	}
	return (count);
}
