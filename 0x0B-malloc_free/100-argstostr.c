#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	ptr = malloc(ac * sizeof(char *));


	for (a = 0; a < ac; a++)
	{
		printf("%s\n", av[a]);
	}
	ptr = malloc(ac - 1 * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
