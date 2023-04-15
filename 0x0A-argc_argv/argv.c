#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("no argumnet\n");
		printf("usage : %s <argument1>\n", argv[0]);
		return (1);
	}
	printf("argument count = [%d]\n", argc);

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		{
			printf("excutable = [%s]\n", argv[i]);
		}
		else 
		{
			printf("argment %d= [%s]\n", i, argv[i]);
		}
	}
	return (0);

}
