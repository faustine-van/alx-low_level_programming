#include "main.h"
#include <string.h>
/**
 *_strlen - number of length
 *@s: pointer variable to be tested
 *strlen: length of pointer
 *Return: length of variable
*/
int _strlen(char *s)
{
	unsigned int count;
	count = 0;
	
	while ((*s) != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
