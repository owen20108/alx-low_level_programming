#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: character to print
 *
 * Return: if success 1.
 * if error, -1 is return
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
