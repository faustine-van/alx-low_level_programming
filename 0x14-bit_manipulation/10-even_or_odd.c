#include <stdio.h>
#include "main.h"

/**
 *check_even_or_odd - check if the number is odd or even
 *@num: given number
 *Description: In order to find if number is odd or even we have first to find
 *the LSB(Least Significant Bit) if the LSB of number is 1 ,then the number is
 *even otherwise is even.
 *Return: nothing
 */
void check_even_or_odd(int num)
{
	(num & 1)

		? printf("%d is odd.\n", num)

		: printf("%d is even.\n", num);

/*	if ((num & 1) == 1)
*	{
*		printf(" %d is odd\n", num);
*	}
*	else
*	{
*		printf(" %d is even\n", num);
*	}
*/
}
/**
 *main - check main entry
 *Return: 0
 */
int main(void)
{
	int n = 10, m = 15, k = 50;

	check_even_or_odd(n);
	check_even_or_odd(m);
	check_even_or_odd(k);

	return (0);
}
