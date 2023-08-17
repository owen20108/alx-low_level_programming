#include "variadic_functions.h"

/**
 * print_all -function that print anything
 * @format: format for argument
 */
void prntchr(va_list *args)
{
	printf("%c", va_arg(*args, int));
}
/**
 * print - prints intgers
 * @args: pointer for argument
 */
void print(va_list *args)
{
	printf("%d", va_arg(*args, int));
}
/**
 * prntflt - print floats number
 * @args: pointer for argument
 */
void prntflt(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 * prstr - print strings
 * @args: pointer for args
 */
void prstr(va_list *args)
{
	char *arry;

	arry = va_arg(*args, char *);
	if (arry == NULL)
		arry = "(nil)";
	printf("%s", arry);
}
/**
 * print_all - prints everything
 * @format: const format string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *seprator = "";
	va_list args;
	typ types[] = {
		{"c", prntchr},
		{"i", print},
		{"f", prntflt},
		{"s", prntstr},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].type != NULL && *(types[j].ltr) != format[i])
		{
			j++;
		}
		if (types[j].type != NULL)
		{
			printf("%s", seprator);
			types[j].type(&args);
			seprator = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
