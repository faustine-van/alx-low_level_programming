#include "function_pointers.h"
/**
 *print_name - print the name
 *@name: the name
 *@f: function pointers
 *
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
