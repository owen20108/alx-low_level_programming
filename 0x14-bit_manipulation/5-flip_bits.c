#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits from one number to another number
 * @n: 1st number
 * @m: 2nd number to filp
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numb_diffrnt;
	int acounter;

	numb_diffrnt = n ^ m;
	acounter = 0;

	while (numb_diffrnt)
	{
		acounter++;
		numb_diffrnt &= (numb_diffrnt - 1);
	}

	return (acounter);
}
