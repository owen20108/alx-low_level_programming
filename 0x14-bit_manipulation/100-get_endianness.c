#include "main.h"

/**
 * get_endianness - test endianness
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int num_endnss;

	num_endnss = 1;
	if (*(char *)&num_endnss == 1)
		return (1);
	else
		return (0);
}
