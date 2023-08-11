#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * if_digit - test a string contain  non-digit char
 * @s: string will evaluate
 *
 * Return: 0 if a non-digit, 1 otherwise
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
 * _strlnght - return  length of  string
 * @s: string will evaluate
 *
 * Return:length string
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
 * errorz - fix error for main
 */
void errorz(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplie two positive numbers
 * @argc: number for argument
 * @argv: array for argument
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *strng1, *strng2;
	int lngth1, lngth2, lngth, cuntr, getter, digitz1, digitz2, *rezlt, z = 0;

	strng1 = argv[1], strng2 = argv[2];
	if (argc != 3 || !if_digit(strng1) || !if_digit(strng2))
		errorz();
	lngth1 = _strlnght(strng1);
	lngth2 = _strlnght(strng2);
	lngth = lngth1 + lngth2 + 1;
	rezlt = malloc(sizeof(int) * lngth);
	if (!rezlt)
		return (1);
	for (cuntr = 0; cuntr <= lngth1 + lngth2; cuntr++)
		rezlt[cuntr] = 0;
	for (lngth1 = lngth1 - 1; lngth1 >= 0; lngth1--)
	{
		digitz1 = strng1[lngth1] - '0';
		getter = 0;
		for (lngth2 = _strlnght(strng2) - 1; lngth2 >= 0; lngth2--)
		{
			digitz2 = strng2[lngth2] - '0';
			getter += rezlt[lngth1 + lngth2 + 1] + (digitz1 * digitz2);
			rezlt[lngth1 + lngth2 + 1] = getter % 10;
			getter /= 10;
		}
		if (getter > 0)
			rezlt[lngth1 + lngth2 + 1] += getter;
	}
	for (cuntr = 0; cuntr < lngth - 1; cuntr++)
	{
		if (rezlt[cuntr])
			z = 1;
		if (z)
			_putchar(rezlt[cuntr] + '0');
	}
	if (!z)
		_putchar('0');
	_putchar('\n');
	free(rezlt);
	return (0);
}
