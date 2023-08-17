#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters to return it
 * @n: number of parameters if =0 return 0
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int itrator;
	int sumtion = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (itrator = 0; itrator < n; itrator++)
	{
		sumtion += va_arg(args, int);
	}

	va_end(args);

	return (sumtion);
}
