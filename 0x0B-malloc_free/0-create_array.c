#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *create_array - print array
 *@size: size to be allocated
 *@c: string to outputed
 *Return: str pointer
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int  a;

	str = malloc(sizeof(char) * (size));

	if (str == 0)
	{
		return (NULL);
	}
	a = 0;

	while (a < size)
	{
		str[a] = c;
		a++;
	}
	return (str);
	free(str);
}
