#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum  parameters
 * @n: number of arguments passe to the function
 *
 * Return: result sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int suma = 0;
	va_list list;

	va_start(list, n);

	for (x = 0; x< n;x++)
		suma += va_arg(list, int);

	va_end(list);

	return (suma);
}
