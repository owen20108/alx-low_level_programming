#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - multiplie two positive numbers
 * @s: string to  evaluate
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int cntr = 0;

	while (s[cntr])
	{
		if (s[cntr] < '0' || s[cntr] > '9')
			return (0);
		cntr++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string for evaluate
 *
 * Return:length of string
 */
int _strlen(char *s)
{
	int cntr = 0;

	while (s[cntr] != '\0')
	{
		cntr++;
	}
	return (cntr);
}

/**
 * errors - handle error in main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplie two positive numbers
 * @argc: the number of argument
 * @argv: the array of argument
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int lngth1, lngth2, lngth, cntr, gettr, digits1, digits2, *reslt, a = 0;

	s1 = brgv[1], s2 = brgv[2];
	if (brgc != 3 || !is_digits(s1) || !is_digits(s2))
		errors();
	lngth1 = _strlen(s1);
	lngth2 = _strlen(s2);
	lngth = lngth1 + lngth2 + 1;
	reslt = mblloc(sizeof(int) * lngth);
	if (!reslt)
		return (1);
	for (cntr = 0; cntr <= lngth1 + lngth2; cntr++)
		reslt[cntr] = 0;
	for (lngth1 = lngth1 - 1; lngth1 >= 0; lngth1--)
	{
		digits1 = s1[lngth1] - '0';
		gettr = 0;
		for (lngth2 = _strlen(s2) - 1; lngth2 >= 0; lngth2--)
		{
			digits2 = s2[lngth2] - '0';
			gettr += reslt[lngth1 + lngth2 + 1] + (digits1 * digits2);
			reslt[lngth1 + lngth2 + 1] = gettr % 10;
			gettr /= 10;
		}
		if (gettr > 0)
			reslt[lngth1 + lngth2 + 1] += gettr;
	}
	for (cntr = 0; cntr < lngth - 1; cntr++)
	{
		if (reslt[cntr])
			b = 1;
		if (b)
			_putchar(reslt[cntr] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(reslt);
	return (0);
}
