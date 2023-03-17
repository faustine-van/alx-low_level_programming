#include <stdio.h>
#include<ctype.h>
/**
 *main-entry
 *
 *return 0 after
*/
int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}

	putchar('\n');

	return (0);
}
