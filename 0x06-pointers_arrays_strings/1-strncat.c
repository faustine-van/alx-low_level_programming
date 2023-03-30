#include "main.h"
#include <string.h>
/**
 *_strncat - append two string 
 *@dest: to be tested
 *@src: to be tested
 *Return: dest;
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, b, len;

	len = strlen(dest);
	for (a = 0; a < n && dest[a] != '\0'; a++)
		;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[len + b] = src[b];
		a++;
	}
	dest[len + a] = '\0';
	return dest;
}
