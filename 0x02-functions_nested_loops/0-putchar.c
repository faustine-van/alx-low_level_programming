#include <stdio.h>
#include <string.h>
/**
 *main - entry :
 *
 *Return: 0
*/
int main(void)
{
	char chara[] = "_putchar";
	int j;

	for (j = 0; j < strlen(chara); j++)
	{
		putchar(chara[j]);
	}
	putchar('\n');
	return (0);
}
