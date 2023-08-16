#include "function_pointers.h"

/**
 * print_name - call the function pointer with a character pointer
 * @name: string to pass
 * @f: function pointer to pass
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
