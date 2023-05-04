#include <stdio.h>
/**
 * get_endianness - Checks the systems Byte order
 * Return: Returns 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int a = 1;
	char *p = (char *)&a;

	if (p[0] == 1)
		return (1); /*little endian*/
	else
		return (0); /*big endian*/
}
