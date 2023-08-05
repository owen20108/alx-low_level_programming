#include <stdio.h>

/**
 * main - program toprint all arguments that receive.
 * @argc:int number  arguments
 * @argv: list array of arguments
 *
 * Return: always 0 otherwise fail
 **/

int main(int argc, char *argv[])
{
	int countr = 0;

	for (countr  = 0; countr  < argc; countr++)
	{
		printf("%s\n", argv[countr]);
	}
	return (0);
}
