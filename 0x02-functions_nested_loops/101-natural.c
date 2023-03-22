#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *main - entry: print sum of multiples natural number;
 *
 *Return: 0
*/

int main(void)
{
	int sum3 = 0, sum5 = 0, sum15 = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += i;
		}
		if (i % 5 == 0)
		{
			sum5 += i;
		}
		if (i % 15 == 0)
		{
			sum15 += i;
		}
	}
	printf("%d", sum3 + sum5 - sum15);
	putchar('\n');
	return (0);
}
