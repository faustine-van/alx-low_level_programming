#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concanate string and allocated space for string
 *@s1: dest copied to str
 *@s2: copied to s1
 *Return: (str)
*/
char *str_concat(char *s1, char *s2)
{

	char *str;

	str = (char *) malloc(strlen(s1) + (strlen(s2 + 1) + 2));

	if (str == NULL)
	{
		str = '\0';
		return (NULL);
	}

	strcpy(str, s1);
	strcat(str, s2);

	if (s1 == NULL)
		return str;
	if (s2 == NULL)
		return (str);


	return (str);
	free(str);
}
