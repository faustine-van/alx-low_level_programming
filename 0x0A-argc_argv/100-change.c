#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the minimum number of coins to make changes for
 *for amount of money
 *@argc: number of argument in the command line
 *@argv: pointer point the array
 *Return: 0
*/
int main(int argc, char **argv)
{
	int a, b, cent_number;
	int cent[5];

	cent[0] = 25;
	cent[1] = 10;
	cent[2] = 5;
	cent[3] = 2;
	cent[4] = 1;
	a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent_number = atoi(argv[1]);

	if (cent_number < 0)
	{
		printf("0\n");
	}
	else
	{
		for (b = 0; b < 5 && cent_number > 0; b++)
		{
			while (cent_number >= cent[b])
			{
				a++;
				cent_number -= cent[b];
			}
		}
	printf("%d\n", a);
	}
	return (0);
}
