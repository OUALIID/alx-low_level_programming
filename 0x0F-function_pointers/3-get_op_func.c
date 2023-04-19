#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Responsible for selecting the correct
 * job to perform the required operation.
 * @s: representing the requested operation.
 * Return: Here we depend on the situation
 */
int (*get_op_func(char *s))(int, int)
{
	int j;

	op_t ops[] = {
		{ "+", op_add }, { "-", op_sub }, { "*", op_mul },
		{ "/", op_div }, { "%", op_mod }, { NULL, NULL }
	};
	j = 0;
	while (j < 5)
	{
		if (strcmp(s, ops[j].op) == 0)
			return (ops[j].f);
		j++;
	}
	return (0);
}
