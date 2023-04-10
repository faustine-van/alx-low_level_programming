#include <stdio.h>
#include <stdlib.h>
/**
 *main - print multplication of number
 *@argv: an array of size of argc
 *@argc: count number of arguments
 *Return: 0
*/
int main(int argc, char *argv[])
{
	int a, mul;
	char *long_num;

	mul = 1;

	if (argc >= 2)
	{
		for (a = 1; a < argc; a++)
		{
			mul *= strtol(argv[a], &long_num, 10);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
