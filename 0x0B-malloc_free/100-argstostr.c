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
	int len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	ptr = malloc(ac * sizeof(char *));

	len = 0;
	for (a = 0; a < ac; a++)
	{
		len += strlen(av[a]);
		printf("%s\n", av[a]);
	}
	ptr = malloc(len + 1 * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
