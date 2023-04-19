#include "3-calc.h"
#include <stddef.h>
/**
 *get_op_func - takes argument to represent operator
 *@s: as an argument, which represents the operator.
 *Return: return the function pointer of that structure's function.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	/* To search through the ops array, we use a while loop with an index*/
	/* variable i. We check each structure in the array to see if its*/
	/* operator string matches s.*/

	i = 0;

	while (ops[i].op)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
	}
	return (NULL);
}
