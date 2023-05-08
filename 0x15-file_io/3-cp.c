#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clos - close error
 * @fd: the file descripe for print
 */
void clos(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
	exit(100);
}
/**
 * main - copy content of  file to another
 * @ac: args count
 * @a: arguments pointer
 * Return: number of successfull copy chars
 */
int main(int ac, char **a)
{
	int filed1, filed2, red = 1, wrt, clse, clse2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", a[0]);
		exit(97);
	}
	filed1 = open(a[1], O_RDONLY);
	if (filed1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
		exit(98);
	}
	filed2 = open(a[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
while (red > 0)
{
red = read(filed1, buf, 1024);
if (red == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
exit(98);
}
wrt = write(filed2, buf, red);
if (wrt == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", a[2]);
exit(99);
}
}
	clse = close(filed1);
	if (clse == -1)
		clos(filed1);
	clse2 = close(filed2);
	if (clse2 == -1)
		clos(filed2);
	return (wrt);
}
