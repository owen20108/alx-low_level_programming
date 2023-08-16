#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - main entry point
 * @argc: arg count
 * @argv: pointers for argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, reslt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	reslt = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", reslt);
	return (0);
}
