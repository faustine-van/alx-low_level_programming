#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int num = 51;
	int bits = sizeof(int) * 8;
	int msb = 1 << (bits - 1);

	if (num & msb)
	{
		printf("the msb is set to 1\n");
	}
	else
	{
		printf("the msb is set to 0\n");
	}
	return (0);
}
