#include "main.h"
/**
 * wildcmp - compares strings 1 for identical otherwise 0
 * @s1: the normal string
 * @s2: the special string containing "*"
 *
 * Return: 1 if identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		s2++;
		return (wildcmp(s1, s2));
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	if (*s1 != '\0')
	{
		s1++;
		s2++;
		(wildcmp(s1, s2));
	}
	return (1);
}

