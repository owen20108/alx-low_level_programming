#include "main.h"
#include <stdio.h>
/**
 * get_bit - get a value for the given index
 * @n: a number to calcutae
 * @index: index begin at 0
 * Return: Value for bit in index, -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num_value;

	if (index > 64)
		return (-1);

	num_value = n >> index;

	return (num_value & 1);
}
