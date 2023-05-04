#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of  number
 * @n: decimal number to print as a binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temporry;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temporry = n, shift = 0; (temporry >>= 1) > 0; shift++)
		;

	for (; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
	}
}
