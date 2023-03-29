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
	int i = 0;
	int result;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = s1[i] - s2[i];
		if (result != 0)
		{
			if (result < 0)
			{
				return (-*s1);
			}
			return (*s2);
		}
		i++;
	}
	return (0);
}
