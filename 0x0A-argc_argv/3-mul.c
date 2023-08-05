#include <stdio.h>
#include <stdlib.h>

/**
 * main - program is multipy two numbers.
 * @argc: int number of arguments
 * @argv: list array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int mltply = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	mltply = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mltply);
	return (0);
}
