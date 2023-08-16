#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_functions - choose the operations to use
 * @strng: string parameter
 *
 * Return: pointer for operation
 */
int (*get_op_functions(char *strng))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int itrtor;

	itrtor = 0;
	while (ops[itrtor].fnction != NULL)
	{
		if (*strng == *(ops[itrtor].op) && strng[1] == '\0')
			return (ops[itrtor].fnction);
		itrtor++;
	}

	printf("Error\n");
	exit(99);
}
