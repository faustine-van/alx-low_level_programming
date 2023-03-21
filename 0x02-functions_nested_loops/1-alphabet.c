#include <stdio.h>
#include <ctype.h>
/**
 *main - check the code
 *
 *Return: Always 0.
 *
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Prints "Hello"
 *
 * Return : alphabets in lower case
 */
void print_alphabet(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}
	putchar('\n');
}
