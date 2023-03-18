#include <stdio.h>
/**
 *main -entry
 *
 *Return: 0
*/
int main(void)
{
	int a, x;

	for (a = '0'; a < '9'; a++)
	{
		for (x = a + 1; x <= '9'; x++)
		{
			if (x != a)
			{
				putchar(a);
				putchar(x);
			}
			if (a == '8' && x == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
