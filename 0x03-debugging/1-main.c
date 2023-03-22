#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	/* infinity loop*/
	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}
	/*infinity loop*/
	printf("Infinite loop avoided! \\o/\n");/*infinit loop*/
	return (0);
}
