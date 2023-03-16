#include<stdio.h>

int main(void)
{

	printf("Size of a char: %lx byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(unsigned long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(unsigned long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
