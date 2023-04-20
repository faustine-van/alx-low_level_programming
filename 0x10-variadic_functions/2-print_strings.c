#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - prints strings
 *@separator: constant char string
 *@n: number of argument passed in function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);

	if (separator == NULL)
	{
		return;
	}
	for (i = 1; i <= n; i++)/*or we can say for(i = 0; i < n; i++)*/
	{
		char *str_v = va_arg(str, char *);

		printf("%s", str_v ?  str_v : "nil");
		/*or (str_v == NULL) ? "nil" : str_v*/


		/*or if (i != n - 1) because if n = 5; i will iterate till 4 */
		if (i != n  && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

}
