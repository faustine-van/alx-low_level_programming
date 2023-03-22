#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
*/

int main(void)
{
	int i = 3; /* the first */
	long int t1 = 1, t2 = 2;
	long int next = t1 + t2;

	printf("%lu, ", t1);
	printf("%lu, ", t2);

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		t1 = t2;
		t2 = next;
		next = t1 + t2;
		i++;
	}
	putchar('\n');
	return (0);
}
