#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int itr;
	char *strng;

	va_list list;

	va_start(list, n);

	for (itr = 0; itr < n; itr++)
	{
		strng = va_arg(list, char *);
		if (!strng)
			strng = "(nil)";
		if (!separator)
			printf("%s", strng);
		else if (separator && itr == 0)
			printf("%s", strng);
		else
			printf("%s%s", separator, strng);
	}

	printf("\n");

	va_end(list);
}

