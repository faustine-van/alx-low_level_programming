#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry : prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 *Return: 0
*/
int main(void)
{
	int i;
	int n = 1, t = 2;
	int sum = n + t;

	printf("%d, %d, ", n, t);
	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", sum);
		n = t;
		t = sum;
		sum = n + t;
	}
	return (0);
}
