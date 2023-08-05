#include <stdio.h>
#include "main.h"

/**
 * main - add two numbers
  * @argc:int
  * @argv:array of string
  * Return: sum of all numbers
 */
int main(int argc, char *argv[])
{
	int cntr;
	int sy;
	int co;
	int sumt;
	char *ar;

	sum = 0;
	co = 0;

	cntr = 1;
	while (cntr < argc)
	{
		ar = argv[cntr];
		sy = 0;
		while (ar[sy] != '\0')
		{
			if (ar[sy] < '0' || ar[sy] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sy++;
		}
		cntr++;
	}

	for (cntr = 1; cntr < argc; cntr++)
	{
		co = atoi(argv[cntr]);
		sumt = sumt + co;
	}
	printf("%d\n", sumt);
	return (0);
}
