#include <stdio.h>
#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: destination
 *@n: number to be tested
 *@src: source of memory
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest = *src;
		*dest++ = *src++;
	}
	return (dest);
}
