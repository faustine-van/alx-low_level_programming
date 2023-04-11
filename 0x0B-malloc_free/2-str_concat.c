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

	str = (char *) malloc(strlen(s1) + strlen(s2 + 1));

	strcpy(str, s1);
	strcat(str, s2);

	if (str == NULL)

		return (NULL);

	return (str);
	free(str);
}