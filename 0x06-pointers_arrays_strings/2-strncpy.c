#include "main.h"
#include <string.h>
/**
 *_strncpy - copies string from src
 *@src: source of string
 *@dest: destination
 *@n: size of src to be added to dest
 *Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	/*printf("\n");*/
	for ( ; a < n; a++)
	dest[a] = '\0';
	return (dest);
}
