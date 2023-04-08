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

	mul = 1;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			mul *= atoi(argv[a]);
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
