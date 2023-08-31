#include "main.h"

/**
 * set_bit - set value for bit to 1 in  given index
 * @n: pointer for decimal 
 * @index: index location for change, begin at 0
 * Return: 1 if it success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_value;

	if (index > 64)
		return (-1);

	for (num_value = 1; index > 0; index--, num_value *= 2)
		;
	*n += num_value;

	return (1);
}
