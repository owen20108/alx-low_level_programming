#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of bit at in given index
 * @n: number for evaluate
 * @index: index start from 0, for the bit to get
 * Return: Value of bit at index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int holding;

	if (index > 64)
		return (-1);

	holding = n >> index;

	return (holding & 1);
}
