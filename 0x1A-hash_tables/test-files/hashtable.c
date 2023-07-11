#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 50000

unsigned long hash(char *str)
{
	unsigned long i = 0;

	for (int j = 0; str[j]; j++)
		i += str[j];
	return i % TABLE_SIZE;
}

int main()
{
	char input[] = "Hello, word";
	unsigned int hashcode = hash(input);

	printf("Hash code: %u\n", hashcode);
	return (0);
}
