#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - return a pointer for a new string
 * @str: string to duplicate
 *
 * Return: pointer to new string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplcte;
	unsigned int contr, length;

	contr = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplcte = malloc(sizeof(char) * (length + 1));

	if (duplcte == NULL)
		return (NULL);

	while ((duplcte[contr] = str[contr]) != '\0')
		contr++;

	return (duplcte);
}
