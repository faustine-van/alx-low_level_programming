#include <stdio.h>
/**
 * get_endianness - Checks the systems Byte order
 * Return: Returns 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	int p = (int) (((char *)&x)[0]);

	return (p);
}
