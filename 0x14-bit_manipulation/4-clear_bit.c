#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set value of  bit to 0 at given index
 * @n: pointer for decimal number for change
 * @index: index position for change
 * Return: 1 if it work, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int holding;

	if (index > 64)
		return (-1);
	holding = index;
	for (m = 1; holding > 0; m *= 2, holding--)
		;

	if ((*n >> index) & 1)
		*n -= m;

	return (1);
}
