#include "variadic_functions.h"
/**
 * print_strings - prints function arguments  followed by a new line
 * @separator: the separate string between the strings
 * @n: number of arguments pass to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *arry;
	unsigned int itrator;
	va_list args;

	va_start(args, n);

	for (itrator = 0; itrator < n; itrator++)
	{
		arry = va_arg(args, char*);
		if (arry == NULL)
			arry = "(nil)";
		printf("%s", arry);
		if (itrator < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
