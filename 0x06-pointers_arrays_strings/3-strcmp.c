#include "main.h"
#include <string.h>
/**
 *_strcmp - compare string of s1 and s2;
 *@s1: 
 *@s2:
 *Return:
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	for (i = 0; *(s1 + i) == *(s2 + i) && *(s1 + i) == '\0';);

	if (*(s1 + i) < *(s2 + i))
	{
		result = -15;
	}
	else if (*(s1 + i) > *(s2 + i))
	{
		result = 15;

	}
	else
	{
		result = 0;
	}
	return (result);
}
