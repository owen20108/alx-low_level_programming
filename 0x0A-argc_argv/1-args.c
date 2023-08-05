#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments pass to program
 * @argc: number of arguments line
 * @argv: pointer for array of arguments of command
 *
 * Return: 0 (Success) otherwise fail
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
