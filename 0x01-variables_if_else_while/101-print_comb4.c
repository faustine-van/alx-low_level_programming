#include <stdio.h>
/**
 *main -entry
 *
 *Return: 0
*/
int main(void)
{
	int a, x, p;

	for (a = '0'; a < '9'; a++)
	{
		for (x = a + 1; x <= '9'; x++)
		{
			for (p = x + 1; p <= '9'; p++)
				if ((x != a) != p)
				{
					putchar(a);
					putchar(x);
					putchar(x);
				}
			if (a == '7' && x == '8')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
