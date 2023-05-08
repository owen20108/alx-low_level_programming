#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * clos - close errors
 * @fd: the file descriptor to print
 */
void clos(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
	exit(100);
}
/**
 * main - copies content of one file to another
 * @ac: arg count
 * @a: argument pointers
 * Return: number of successfully copied chars
 */
int main(int ac, char **a)
{
	int fd1, fd2, rd = 1, wr, cls, cls2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", a[0]);
		exit(97);
	}
	fd1 = open(a[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
		exit(98);
	}
	fd2 = open(a[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
while (rd > 0)
{
rd = read(fd1, buf, 1024);
if (rd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
exit(98);
}
wr = write(fd2, buf, rd);
if (wr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", a[2]);
exit(99);
}
}
	cls = close(fd1);
	if (cls == -1)
		clos(fd1);
	cls2 = close(fd2);
	if (cls2 == -1)
		clos(fd2);
	return (wr);
}
