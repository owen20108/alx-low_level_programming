#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flip bit to convert one number to another number
 * @n: first number
 * @m: second number to convert
 * Return: number of bits that  needed for flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ;
	int count;

	differ = n ^ m;
	count = 0;

	while (differ)
	{
		count++;
		differ &= (differ - 1);
	}

	return (count);
}

