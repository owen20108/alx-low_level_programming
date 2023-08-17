#include "variadic_functions.h"
/**
 * print_number - that followed by  new line
 * @separator: the separation string printed between numbers
 * @n: number of arguments  passe to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int value = 0;
	unsigned int itrator;
	va_list args;

	va_start(args, n);

	for (itrator = 0; itrator < n; itrator++)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (itrator < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
