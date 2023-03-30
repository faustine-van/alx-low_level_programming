#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strcat - append the src string to dest string
 *@dest: pointer to appended by src
 *@src: pointer to append to dest
 *Return: dest;
*/
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; *(dest + a) != '\0'; a++)
	;

	for (b = 0; *(src + b) != '\0'; b++)
	{
		*(dest + a) = *(src + b);
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
