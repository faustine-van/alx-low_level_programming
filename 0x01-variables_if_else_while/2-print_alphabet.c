#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
/**
 *main - entry
 *
 *Return: 0
*/
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
	int alpha = tolower(x);
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
