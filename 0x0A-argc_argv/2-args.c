#include <stdio.h>
/**
 *main - print all argument its recieve
 *@argc: count argument
 *@argv: an array of size of argc
 *Return: 0
*/
int main(int argc, char *argv[])
{
	int a;

	if (argc)
	{
		for (a = 0; a < argc; a++)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);
}
