#include "main.h"
#include <string.h>
/**
 *set_string - set value to pointer
 *@s: double pointer
 *@to: pointer
 *
*/
void set_string(char **s, char *to)
{
	char **str = **s;
	*str = to;
}
