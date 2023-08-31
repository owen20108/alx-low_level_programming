#include "main.h"
#include <stdio.h>
/**
 * clear_bit - make  value of  bit be 0 at a given index
 * @n: pointer for decimal number
 * @index: index location
 * Return: 1 if  success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int itr;
	unsigned int numb_value;

	if (index > 64)
		return (-1);
	numb_value = index;
	for (itr = 1; numb_value > 0; itr *= 2, numb_value--)
		;

	if ((*n >> index) & 1)
		*n -= itr;

	return (1);
}
