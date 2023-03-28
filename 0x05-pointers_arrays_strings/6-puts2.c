#include "main.h"
#include <string.h>
/**
 *puts2 - print every character starrung from first character
 *@str : used to print string
*/
void puts2(char *str)
{
	int i, len;

	i = 0;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
