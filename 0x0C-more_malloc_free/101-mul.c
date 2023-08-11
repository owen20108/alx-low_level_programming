#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * if_digit - test if a string has a non-digit char
 * @s: string will be evaluate
 *
 * Return: 0 for a non-digit is found, 1 otherwise
 */
int if_digit(char *s)
{
	int cuntr = 0;

	while (s[cuntr])
	{
		if (s[cuntr] < '0' || s[cuntr] > '9')
			return (0);
		cuntr++;
	}
	return (1);
}

/**
 * _strlen - get  length of  string
 * @s: string will be evaluate
 *
 * Return: the length of the string
 */
int _strlnght(char *s)
{
	int cuntr = 0;

	while (s[cuntr] != '\0')
	{
		cuntr++;
	}
	return (cuntr);
}

/**
 * errors - fix error for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplie two positive numbers
 * @argc: number of  argument
 * @argv: array of argument
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *strng1, *strng2;
	int lngth1, lngth2, lngth, cuntr, getter, digits1, digits2, *rslt, z = 0;

	strng1 = argv[1], strng2 = argv[2];
	if (argc != 3 || !if_digit(strng1) || !if_digit(strng2))
		errors();
	lngth1 = _strlnght(strng1);
	lngth2 = _strlnght(strng2);
	lngth = lngth1 + lngth2 + 1;
	rslt = malloc(sizeof(int) * lngth);
	if (!rslt)
		return (1);
	for (cuntr = 0; cuntr <= lngth1 + lngth2; cuntr++)
		rslt[cuntr] = 0;
	for (lngth1 = lngth1 - 1; lngth1 >= 0; lngth1--)
	{
		digits1 = strng1[lngth1] - '0';
		getter = 0;
		for (lngth2 = _strlnght(strng2) - 1; lngth2 >= 0; lngth2--)
		{
			digits2 = strng2[lngth2] - '0';
			getter += rslt[lngth1 + lngth2 + 1] + (digits1 * digits2);
			rslt[lngth1 + lngth2 + 1] = getter % 10;
			getter /= 10;
		}
		if (getter > 0)
			rslt[lngth1 + lngth2 + 1] += getter;
	}
	for (cuntr = 0; cuntr < lngth - 1; cuntr++)
	{
		if (rslt[cuntr])
			z = 1;
		if (z)
			_putchar(rslt[cuntr] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(rslt);
	return (0);
}
