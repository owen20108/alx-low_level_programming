#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary represent number
 * @n: decimal print as a binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temprry_numb;
	int reprsent;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temprry_numb = n, reprsent = 0; (temprry_numb >>= 1) > 0; reprsent++)
		;

	for (; reprsent >= 0; reprsent--)
	{
		if ((n >> reprsent) & 1)
			printf("1");
		else
			printf("0");
	}
}
