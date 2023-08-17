#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters followed by a new line
 * @separator: string to be print between numbers
 * @n: number of integers pass to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int itr;
	va_list list;

	va_start(list, n);

	for (itr = 0; itr < n; itr++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && itr == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
