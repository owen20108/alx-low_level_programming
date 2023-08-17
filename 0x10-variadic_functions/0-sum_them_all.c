#include "variadic_functions.h"

/**
 * sum_them_all - calc the sum of  parameters
 * @n: number of arguments passe to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int itr;
	int sumtion = 0;
	va_list list;

	va_start(list, n);

	for (itr = 0; itr < n; itr++)
		sumtion += va_arg(list, int);

	va_end(list);

	return (sumtion);
}

