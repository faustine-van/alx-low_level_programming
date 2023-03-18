#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main -entry : printing last digit
 *
 *Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (x > 5)
		printf("and is greater than than 5");
	if (x == 0)
		printf("and is 0");
	if (x < 6 && x != 0)
		printf("and is less than 6 and not 0");
	return (0);
}
