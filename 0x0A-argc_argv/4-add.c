#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int o;
	unsigned int l, suma = 0;
	char *f;

	if (argc > 1)
	{
		for (o = 1; o < argc; o++)
		{
			f = argv[o];

			for (l = 0; l < strlen(f); l++)
			{
				if (f[l] < 48 || f[l] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			suma += atoi(f);
			f++;
		}

		printf("%d\n", suma);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
