#include <stdio.h>
/**
 *main - print the number of arguments passed into it
 *@argc: argument1
 *@argv: argument2
 *Return: 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
