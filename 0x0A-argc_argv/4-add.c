#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - adds positive numbers.
  *@argc: count
  *@argv: an array
  *Return: 0
 */
int main(int argc, char *argv[])
{
	int a, sum;
	char *check;

	sum = 0;

	/* check if no argument the output must be 0*/
	if (argc == 1)
	{
		printf("0\n");
	}

	/* output result else print error*/
	if (argc >= 2)
	{
		for (a = 1; a < argc; a++)
		{
			int n1 = strtol(argv[a], &check, 10);

			if (*check)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += n1;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
