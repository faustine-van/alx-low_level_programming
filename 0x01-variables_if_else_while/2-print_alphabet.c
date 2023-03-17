#include<stdio.h>
#include<ctype.h>
/**
 * main - entry
 *printing all alphabets using putchar in lower case
 *for loop
 *return : 0
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
