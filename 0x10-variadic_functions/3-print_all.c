#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
/**
 *print_all - print anything such character , string , integers and float
 *@format: format string
*/
void print_all(const char * const format, ...)
{
	int i;
	char c;
	float f;
	char *s, *form;
	va_list args;

	va_start(args, format);
	form = (char *) format; /*create nonconstant*/
	while (*form != '\0' && strlen(form) <= 9)
	{
		switch (*form)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s != NULL)
				{
					printf("%s", s);
				}
				printf("(nil)");
				break;
			default:
				/* do nothing if format character is not recognized */
				break;
		}
		form++; /* increment the format string pointer */
		if (*form != '\0' && (*form == 'c' || *form == 'i' || *form == 'f' || *form == 's'))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
