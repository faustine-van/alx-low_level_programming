#include "main.h"
#include <string.h>
/**
 *_strncat - append two string
 *@dest: to be tested
 *@src: to be tested
 *@n: size of bytes to be added to dest from src
 *Return: dest;
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, b, len;
	/* length of dest*/
	len = strlen(dest);
	for (a = 0; a < n && dest[a] != '\0'; a++)
		;

	/* take byte from src and added to dest */
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[len + b] = src[b];
		a++;
	}
	dest[len + a] = '\0';
	return (dest);
}
