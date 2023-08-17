#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of type of argument passe to  function
 */
void print_all(const char * const format, ...)
{
	int itr = 0;
	char *strng, *seprtr = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[itr])
		{
			switch (format[itr])
			{
				case 'c':
					printf("%s%c", seprtr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seprtr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", seprtr, va_arg(list, double));
					break;
				case 's':
					strng = va_arg(list, char *);
					if (!strng)
						strng = "(nil)";
					printf("%s%s", seprtr, strng);
					break;
				default:
					itr++;
					continue;
			}
			seprtr = ", ";
			itr++;
		}
	}

	printf("\n");
	va_end(list);
}
