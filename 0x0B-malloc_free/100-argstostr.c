#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenate all arguments of the program.
  *@ac: argument counter.
  *@av: pointer of array its size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int cntr, cntr2, var, size;
	char *argmnt;

	size = 0;
	var = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	cntr = 0;
	while (cntr < ac)
	{
		cntr2 = 0;
		while (av[cntr][cntr2])
		{
			size++;
			cntr2++;
		}
		size++;
		cntr++;
	}
	argmnt = malloc((sizeof(char) * size) + 1);
	if (argmnt == NULL)
		return (NULL);
	cntr = 0;
	while (cntr < ac)
	{
		cntr2 = 0;
		while (av[cntr][cntr2])
		{
			argmnt[var] = av[cntr][cntr2];
			cntr2++;
			var++;
		}
		argmnt[var] = '\n';
		var++;
		cntr++;
	}
	argmnt[var] = '\0';
	return (argmnt);
}
