#include "main.h"
/**
 *swap_int - swap mumber param a and param b
 *@a: pointer1 to be used
 *@b: pointer2 to be used
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
