#include "main.h"
#include <string.h>
/**
 *_strcmp - compare string of s1 and s2;
 *@s1:pointer to be tested
 *@s2: pointer to be tested;
 *Return: return result
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	for (i = 0; *(s1 + i) == *(s2 + i) && *(s1 + i) == '\0';i++)

	if (*(s1 + i) < *(s2 + i))
	{
		result = *(s1 + i);
	}
	else if (*(s1 + i) > *(s2 + i))
	{
		result = *(s2 + i);

	}
	else
	{
		result = 0;
	}
	return (result);
}
