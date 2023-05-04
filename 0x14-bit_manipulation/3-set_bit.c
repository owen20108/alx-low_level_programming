#include "main.h"
/**
 * set_bit - sets value of bit to 1 at  given index
 * @n: decimal number pass from pointer
 * @index: index position to change, start at 0
 * Return: 1 if it work, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pntr;

	if (index > 64)
		return (-1);

	for (pntr = 1; index > 0; index--, pntr *= 2)
		;
	*n += pntr;

	return (1);
}
