#include <stdio.h>
#include <stdlib.h>

/**
 * main - print  opcodes of  own main function.
 * @argc: argrument count
 * @argv: argrument pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bits, itrator;
	char *arry;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bits = atoi(argv[1]);

	if (bits < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arry = (char *)main;

	for (itrator = 0; itrator < bits; itrator++)
	{
		if (itrator == bits - 1)
		{
			printf("%02hhx\n", arry[itrator]);
			break;
		}
		printf("%02hhx ", arry[itrator]);
	}
	return (0);
}
