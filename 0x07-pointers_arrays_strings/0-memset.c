#include "main.h"
#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 20
/**
 *_memset - fill memory with constant byte b
 *@s: to be tested
 *@b: constant byte variable
 *@n: size of n;
 *Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	while  (n > 0)
	{
		*s++  = (unsigned char)b;
		n--;
	}
	return (s);
}
