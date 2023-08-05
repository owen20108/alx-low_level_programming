#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Print the sum of args positive numbers
  * @argc: int argument count
  * @argv: list argument vector
  *
  * Return:  zero
  */
int main(int argc, char *argv[])
{
	int cnt;
	unsigned int q, suma = 0;
	char *ary;

	if (argc > 1)
	{
		for (cnt = 1; cnt < argc; cnt++)
		{
			ary = argv[cnt];

			for (q = 0; q < strlen(e); q++)
			{
				if (ary[q] < 48 || ary[q] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			suma += atoi(ary);
			ary++;
		}

		printf("%d\n", suma);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
