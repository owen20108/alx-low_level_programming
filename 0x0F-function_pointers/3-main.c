#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main entry point
 * @argc: count  arguments
 * @argv: pointer arguments
 *
 * Return: Always 0 
 */
int main(int argc, char *argv[])
{
	int numbr1, numbr2, reslt;
	char oprtor;
	int (*fnction)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numbr1 = atoi(argv[1]);
	numbr2 = atoi(argv[3]);

	fnction = get_op_functions(argv[2]);
	if (fnction == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	oprtor = *argv[2];
	if ((oprtor == '/' || oprtor == '%') && numbr2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	reslt = fnction(numbr1, numbr2);
	printf("%d\n", reslt);
	return (0);
}
