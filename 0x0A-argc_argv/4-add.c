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
	int cntr, var, rslt;

	rslt = 0;
	if (argc > 1)
	{
		for (cntr = 1; cntr < argc; cntr++)
		{
			for (j = 0; argv[cntr][var] != '\0'; var++)
			{
				if (argv[cntr][var] >= '0' && argv[cntr][var] <= '9')
				{
					continue;
				} else
				{
					printf("Error\n");
					return (1);
				}
			}
			rslt += atoi(argv[cntr]);
		}
		printf("%d\n", rslt);
	} else
		printf("0\n");
	return (0);
}
