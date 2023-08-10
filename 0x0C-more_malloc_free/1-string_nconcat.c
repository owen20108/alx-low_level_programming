#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenate two strings
 * @s1: string to edit
 * @s2: string concatenate from it
 * @n: number of bytes s2 to concatenate with s1
 *
 * Return: pointer to result of concatinate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strng;
	unsigned int cuntr1 = 0, cuntr2 = 0, lnght1 = 0, lnght2 = 0;

	while (s1 && s1[lnght1])
		lnght1++;
	while (s2 && s2[lnght2])
		lnght2++;

	if (n < lnght2)
		strng = malloc(sizeof(char) * (lnght1 + n + 1));
	else
		strng = malloc(sizeof(char) * (lnght1 + lnght2 + 1));

	if (!strng)
		return (NULL);

	while (cuntr1 < lnght1)
	{
		strng[cuntr1] = strng1[cuntr1];
		cuntr1++;
	}

	while (n < lnght2 && cuntr1 < (lnght1 + n))
		strng[cuntr1++] = strng2[cuntr2++];

	while (n >= lnght2 && cuntr1 < (lnght1 + lnght2))
		strng[cuntr1++] = strng2[cuntr2++];

	strng[cuntr1] = '\0';

	return (strng);
}
