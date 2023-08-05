#include <stdio.h>
#include <stdlib.h>

/**
 * main - program get minimum of coins change for money
 * @argc: int numbrber of arguments
 * @argv: list array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int numbr, cuntr, rslt;
	int coinz[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numbr = atoi(argv[1]);
	rslt = 0;

	if (numbr < 0)
	{
		printf("0\n");
		return (0);
	}

	for (cuntr = 0; cuntr < 5 && numbr >= 0; cuntr++)
	{
		while (numbr >= coinz[cuntr])
		{
			rslt++;
			numbr -= coinz[cuntr];
		}
	}

	printf("%d\n", rslt);
	return (0);
}
