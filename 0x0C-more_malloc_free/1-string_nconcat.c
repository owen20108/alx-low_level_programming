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
	unsigned int cuntr1, cuntr2, lngth = 0, lngth2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
		lngth++;
	}
	if (s2 == NULL)
	{
		s2 = "";
		lngth2++;
	}
	for (cuntr1 = 0; s1[cuntr1] != '\0'; cuntr1++, lngth++)
		;
	for (cuntr1 = 0; s2[cuntr1] != '\0' &&  cuntr1 < n; cuntr1++, lngth2++)
		;
	strng = malloc((sizeof(char) * lngth) + (sizeof(char) * lngth2) + 1);
	if (strng == NULL)
		return (NULL);
	for (cuntr1 = 0; s1[cuntr1] != '\0'; cuntr1++)
		strng[cuntr1] = s1[cuntr1];
	for (cuntr2 = 0; s2[cuntr2] != '\0' && cuntr2 < n; cuntr2++, cuntr1++)
		strng[cuntr1] = s2[cuntr2];
	strng[cuntr1] = '\0';
	return (strng);
}
