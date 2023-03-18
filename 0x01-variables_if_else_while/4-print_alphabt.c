#include <stdio.h>
#include <time.h>
/**
 *main - entry
 *
 *Return: 0
*/
int main(void)
{
	char x, e, q;

	e = 'e';

	q = 'q';

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != e && x != q)
			putchar(x);
	}
	putchar('\n');
	return (0);
}
