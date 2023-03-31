#include "main.h"
/**
 *cap_string - convert every first character of word in sentence
 *@c: to be tested
 *Return: c
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] = c[i] - 32;
			continue;
		}
		if (c[i] == ' ')
		{
			if (c[i] >= 'a' && c[i] <= 'Z')
				c[i] = c[i] - 32;
			continue;
		}
		else
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
				c[i] = c[i] + 32;
			continue;
		}
	}
	return (c);
}
