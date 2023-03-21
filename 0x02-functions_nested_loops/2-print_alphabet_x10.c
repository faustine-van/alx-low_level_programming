#include <stdio.h>
#include <ctype.h>
/**
 *main - entry : print alphabets ten times
 *
 *Return: 0
*/
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 *print_alphabet_x10 - print alphabets ten times in lowercase
 *
 *Return: alphabets ten times
*/
void print_alphabet_x10(void)
{
	int x, j;

	for (j = 0; j < 10; j++)
	{
		for (x = 'A'; x <= 'Z'; x++)
		{
			int lower_x = tolower(x);

			putchar(lower_x);
		}
		putchar('\n');
	}
}
