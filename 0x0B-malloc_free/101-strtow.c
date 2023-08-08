#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int fl, cntr, wrd;

	fl = 0;
	wrd = 0;

	for (cntr = 0; s[cntr] != '\0'; cntr++)
	{
		if (s[cntr] == ' ')
			fl = 0;
		else if (fl == 0)
		{
			fl = 1;
			wrd++;
		}
	}

	return (wrd);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int itrt, itrt2 = 0, lnght = 0, word, cntr = 0, strt, end;

	while (*(str + lnght))
		lnght++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);

	for (itrt = 0; itrt <= lnght; itrt++)
	{
		if (str[itrt] == ' ' || str[itrt] == '\0')
		{
			if (cntr)
			{
				end = itrt;
				tmp = (char *) malloc(sizeof(char) * (cntr + 1));
				if (tmp == NULL)
					return (NULL);
				while (strt < end)
					*tmp++ = str[strt++];
				*tmp = '\0';
				matrix[itrt2] = tmp - cntr;
				itrt2++;
				cntr = 0;
			}
		}
		else if (cntr++ == 0)
			strt = itrt;
	}

	matrix[itrt2] = NULL;

	return (matrix);
}
