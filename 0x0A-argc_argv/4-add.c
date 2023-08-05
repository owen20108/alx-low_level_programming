#include <stdio.h>
#include <stdlib.h>

/**
 * main - program add positive numbers.
 * @argc: int number of arguments
 * @argv: list array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int cuntr, sumn = 0, reslt = 0;
	char ch[] = "Error", *find_symbol;

	if (argc > 1)
	{
		for (cuntr = 1; cuntr < argc; cuntr++)
		{
			find_symbol = argv[cuntr];
			while (*find_symbol != 0)
			{
				if (*find_symbol < 47 || *find_symbol > 57)
				{
					printf("%s\n", ch);
					return (1);
				}
				find_symbol++;
			}
			reslt = atoi(argv[i]);
			sumn += reslt;
		}
		printf("%d\n", sumn);
	}
	else
		printf("%d\n", 0);
	return (0);
}
