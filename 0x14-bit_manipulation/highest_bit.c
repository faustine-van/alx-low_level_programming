#include <stdio.h>
#include "main.h"
/**
 *main - check main entry
 *Return: 0
 */
int main(void)
{
	int bit = sizeof(int) * 8;
	int a, order = -1;
	int num = 22;

	for (a = 0; a < bit; a++)
	{
		/*check if bit is set or not*/
		if ((num >> a) & 1)
			order = a;
	}
	if (order != -1)
		printf("highest order bit in %d is %d.\n", num, order);
	else
		printf("o has no set bits.\n");
	return (0);
}
