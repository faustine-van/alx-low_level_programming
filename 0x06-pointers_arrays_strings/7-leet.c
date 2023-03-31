#include "main.h"
/**
 *leet - encode the string
 *@c ; to be tested
 *Return: c
*/
char *leet(char *c)
{
	int i, a;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (c[i] == str1[a])
			{
				c[i] = str2[a];
			}
		}
	}
	return (c);
}
