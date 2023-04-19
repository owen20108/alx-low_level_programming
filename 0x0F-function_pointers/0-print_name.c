#include "function_pointers.h"

/**
 * print_name - calls the function pointer with a char pointer
 * @name: string passed
 * @f: function pointer passed
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
