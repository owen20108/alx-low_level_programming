#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenate two strings
 * @s1: frist string to concatenate it
 * @s2: other string to concatenate it
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int cntr1 = 0, cntr2 = 0, lngh1 = 0, lngh2 = 0;

	while (s1 && s1[lngh1])
		lngh1++;
	while (s2 && s2[lngh2])
		lngh2++;

	str = malloc(sizeof(char) * (lngh1 + lngh2 + 1));
	if (str == NULL)
		return (NULL);

	cntr1 = 0;
	cntr2 = 0;

	if (s1)
	{
		while (cntr1 < lngh1)
		{
			str[cntr1] = s1[cntr1];
			cntr1++;
		}
	}

	if (s2)
	{
		while (cntr1 < (lngh1 + lngh2))
		{
			str[cntr1] = s2[cntr2];
			cntr1++;
			cntr2++;
		}
	}
	str[cntr1] = '\0';

	return (str);
}
