#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr - print argument
 *@ac: length of argument
 *@av: pointer point to a string
 *Return: ptr(allaction);
*/
char *argstostr(int ac, char **av)
{
	int a;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	ptr = malloc(ac * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		printf("%s\n", av[a]);
	}
	return (ptr);
}
